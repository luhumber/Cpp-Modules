/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:55:07 by humbert           #+#    #+#             */
/*   Updated: 2023/10/19 13:38:32 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5) {
    std::cout << "PRESIDENTIAL, constructor called" << std::endl;
    this->_target = "target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5) {
    std::cout << target << ", constructor called" << std::endl;
    this->_target = target;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << this->_target << ", destructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
    std::cout << this->_target << ", copied" << std::endl;
    *this = copy;
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & copy) {
    std::cout << this->_target << ", assigned" << std::endl;
    this->_target = copy._target;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    (void)executor;
    if (executor.getGrade() > this->getGradeToExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned() == 0)
        throw(AForm::NotSignedException());
    std::cout << this->_target << ": you have been pardonned by Zaphod Beeblebrox" << std::endl;
}
