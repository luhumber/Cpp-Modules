/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:23:22 by humbert           #+#    #+#             */
/*   Updated: 2023/10/19 13:22:31 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(void): _name("Basic"), _gradeToSign(150), _gradeToExec(150) {
    std::cout << _name << ", Aform constructor called" << std::endl;
    this->_isSigned = 0;
    return ;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec): 
    _name(name),
    _isSigned(0),
    _gradeToSign(gradeToSign),
    _gradeToExec(gradeToExec) 
{
    std::cout << name << ", Aform constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExec < 1)
        throw(AForm::GradeTooHighException());
    else if (gradeToSign > 150 || gradeToExec > 150)
        throw(AForm::GradeTooLowException());
    return ;
}

AForm::~AForm(void) {
    std::cout << this->_name << ", Aform destructor called" << std::endl;
    return ;
}

AForm::AForm(const AForm &copy):
    _name(copy.getName()),
    _isSigned(copy.getSigned()),
    _gradeToSign(copy.getGradeToSign()),
    _gradeToExec(copy.getGradeToExec())
{
    std::cout << this->_name << ", Aform copied" << std::endl;
    return ;
}

AForm& AForm::operator=(const AForm &copy) {
    std::cout << this->_name << ", Aform assigned" << std::endl;
    this->_isSigned = copy._isSigned;
    return (*this);
}

const std::string   &AForm::getName(void) const {
    return (this->_name);
}

const bool  &AForm::getSigned(void) const {
    return (this->_isSigned);
}

const int   &AForm::getGradeToSign(void) const {
    return (this->_gradeToSign);
}

const int   &AForm::getGradeToExec(void) const {
    return (this->_gradeToExec);
}

void    AForm::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw(AForm::GradeTooLowException());
    else if (this->getSigned() == 1)
        throw(AForm::AlreadySignedException());
    else
        this->_isSigned = 1;
}

const char  *AForm::GradeTooHighException::what(void) const throw() {
    return ("grade is to high");
}

const char  *AForm::GradeTooLowException::what(void) const throw() {
    return ("grade is to low");
}

const char  *AForm::AlreadySignedException::what(void) const throw() {
    return ("Form is already signed");
}

const char  *AForm::NotSignedException::what(void) const throw() {
    return ("Form is not signed");
}

std::ostream	&operator<<(std::ostream &str, AForm const &Aform) {
    return (str << Aform.getName() << ", Aform signing grade " << Aform.getGradeToSign() << ", executing grade " << Aform.getGradeToExec());
}