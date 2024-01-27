/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:26:01 by humbert           #+#    #+#             */
/*   Updated: 2023/11/05 16:33:54 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"

int main( void )
{
	{
		std::cout << "Create ShrubberyCreationForm\n" << std::endl;
		try
		{
			Intern tibo;
			AForm *form;
			form = tibo.makeForm("shrubbery creation", "garden");
			Bureaucrat	jean("Jean", 1);
			std::cout << jean << std::endl;
			std::cout << *form << std::endl;
			jean.signForm(*form);
			jean.executeForm(*form);
			delete form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	{
		std::cout << "Create RobotomyRequestForm\n" << std::endl;
		try
		{
			Intern tibo;
			AForm *form;
			form = tibo.makeForm("robotomy_request", "Will");
			Bureaucrat	jean("Jean", 1);
			std::cout << jean << std::endl;
			std::cout << *form << std::endl;
			jean.signForm(*form);
			jean.executeForm(*form);
			delete form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	{
		std::cout << "Create PresidentialPardonForm\n" << std::endl;
		try
		{
			Intern tibo;
			AForm *form;
			form = tibo.makeForm("presidential-pardon", "Will");
			Bureaucrat	jean("Jean", 1);
			std::cout << jean << std::endl;
			std::cout << *form << std::endl;
			jean.signForm(*form);
			jean.executeForm(*form);
			delete form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	{
		std::cout << "Create PresidentialPardonForm failure\n" << std::endl;
		try
		{
			Intern tibo;
			AForm *form;
			form = tibo.makeForm("presidential unknow", "Will");
			Bureaucrat	jean("Jean", 1);
			std::cout << jean << std::endl;
			std::cout << *form << std::endl;
			jean.signForm(*form);
			jean.executeForm(*form);
			delete form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}