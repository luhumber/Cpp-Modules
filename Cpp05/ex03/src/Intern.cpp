/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:49:25 by humbert           #+#    #+#             */
/*   Updated: 2023/11/05 16:17:14 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern(void) {
    std::cout << "Intern, constructor called" << std::endl;
    return ;
}

Intern::~Intern(void) {
    std::cout << "Intern, destructor called" << std::endl;
    return ;
}

Intern::Intern(const Intern &copy) {
    std::cout << "Intern copied" << std::endl;
    *this = copy;
    return ;
}

Intern& Intern::operator=(const Intern &copy) {
    std::cout << "Intern assigned" << std::endl;
    (void)copy;
    return (*this);
}

AForm   *Intern::makeForm(std::string name, std::string target) {
    std::string forms[3][2] = {
        {"shrubbery", "creation"},
        {"robotomy", "request"},
        {"presidential", "pardon"}
    };

    AForm   *createForm[] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

    std::string::size_type  pos = 0;
    int i;
    int formIndex = -1;
    for (i = 0; i < 3; i++)
    {
        pos = name.find(forms[i][0]);
        if (pos != std::string::npos)
        {
            pos = name.find(forms[i][1]);
            if (pos != std::string::npos)
                formIndex = i;
        }
        if (formIndex != i)
            delete (createForm[i]);
    }
    if (formIndex != -1)
        return (createForm[formIndex]);
    throw(Intern::InvalidNameFormException());
    return (NULL);
}

const char *Intern::InvalidNameFormException::what(void) const throw() {
	return ("invalid form name");
}
