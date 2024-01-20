/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:26:01 by humbert           #+#    #+#             */
/*   Updated: 2023/11/08 16:29:54 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main(void)
{

    /*Too high*/
    try
    {
        Bureaucrat  testh("testh", 0);
        std::cout << testh << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    /*Too low*/
    try
    {
        Bureaucrat  testl("testl", 151);
        std::cout << testl << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    /*Normal upgrade*/
    try
    {
        Bureaucrat  lucas("Lucas", 2);
        std::cout << lucas << std::endl;
        lucas.upperGrade();
        std::cout << lucas << std::endl;
        lucas.upperGrade();
        std::cout << lucas << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    /*Normal downgrade*/
    try
    {
        Bureaucrat  tibo("Tibo", 149);
        std::cout << tibo << std::endl;
        tibo.lowerGrade();
        std::cout << tibo << std::endl;
        tibo.lowerGrade();
        std::cout << tibo << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    try
		{
			Bureaucrat	jean("Jean", 1);
			Bureaucrat	marcel("Marcel", 150);
			Form		test1("Test1", 1, 30);
			Form		test2("Test2", 69, 60);
			Form		test3("Test3", 150, 90);
			std::cout << jean << std::endl;
			std::cout << marcel << std::endl;
			std::cout << test1 << std::endl;
			std::cout << test2 << std::endl;
			std::cout << test3 << std::endl;
			jean.signForm(test1);
			marcel.signForm(test2);
			jean.signForm(test2);
			marcel.signForm(test3);
			jean.signForm(test1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

    return (0);
}
