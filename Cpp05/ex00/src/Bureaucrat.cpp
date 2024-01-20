/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:26:02 by humbert           #+#    #+#             */
/*   Updated: 2023/10/18 16:24:59 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Steve") {
    std::cout << _name << ", bureaucrat constructor called" << std::endl;
    this->_grade = 150;
    return ;
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    std::cout << name << ", bureaucrat constructor called" << std::endl;
    this->_grade = grade;
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    return ;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << this->_name << ", bureaucrat destructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    std::cout << this->_name << ", bureaucrat copied" << std::endl;
    *this = copy;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy) {
    std::cout << this->_name << ", bureaucrat assigned" << std::endl;
    this->_grade = copy._grade;
    return (*this);
}

const std::string &Bureaucrat::getName(void) const {
    return (this->_name);
}

const int &Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

void    Bureaucrat::upperGrade(void) {
    this->_grade--;
    if (this->_grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    return ;
}

void    Bureaucrat::lowerGrade(void) {
    this->_grade++;
    if (this->_grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    return ;
}

const char  *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Error: grade too high");
}

const char  *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("Error: grade too low");
}

std::ostream    &operator<<(std::ostream &str, Bureaucrat const &bureaucrat) {
    return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}
