/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:55:28 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 09:15:19 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45) {
    std::cout << "ROBOTOMY, constructor called" << std::endl;
    this->_target = "target";
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45) {
    std::cout << "ROBOTOMY, constructor called" << std::endl;
    this->_target = target;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "ROBOTOMY, destructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
    std::cout << "ROBOTOMY copied" << std::endl;
    *this = copy;
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    std::cout << this->_target << ", assigned" << std::endl;
    this->_target = copy._target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned() == 0)
        throw(AForm::NotSignedException());
    srand(time(NULL));

    std::cout << "***drill sound***" << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " you were successfully robotised" << std::endl;
    else
    std::cout << "Failure" << std::endl;
    (void)executor;
}
