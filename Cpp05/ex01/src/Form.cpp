/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:23:22 by humbert           #+#    #+#             */
/*   Updated: 2023/10/18 18:15:05 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(void): _name("Basic"), _gradeToSign(150), _gradeToExec(150) {
    std::cout << _name << ", form constructor called" << std::endl;
    this->_isSigned = 0;
    return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec): 
    _name(name),
    _isSigned(0),
    _gradeToSign(gradeToSign),
    _gradeToExec(gradeToExec) 
{
    std::cout << name << ", form constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExec < 1)
        throw(Form::GradeTooHighException());
    else if (gradeToSign > 150 || gradeToExec > 150)
        throw(Form::GradeTooLowException());
    return ;
}

Form::~Form(void) {
    std::cout << this->_name << ", form destructor called" << std::endl;
    return ;
}

Form::Form(const Form &copy):
    _name(copy.getName()),
    _isSigned(copy.getSigned()),
    _gradeToSign(copy.getGradeToSign()),
    _gradeToExec(copy.getGradeToExec())
{
    std::cout << this->_name << ", form copied" << std::endl;
    *this = copy;
    return ;
}

Form& Form::operator=(const Form &copy) {
    std::cout << this->_name << ", form assigned" << std::endl;
    this->_isSigned = copy._isSigned;
    return (*this);
}

const std::string   &Form::getName(void) const {
    return (this->_name);
}

const bool  &Form::getSigned(void) const {
    return (this->_isSigned);
}

const int   &Form::getGradeToSign(void) const {
    return (this->_gradeToSign);
}

const int   &Form::getGradeToExec(void) const {
    return (this->_gradeToExec);
}

void    Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw(Form::GradeTooLowException());
    else
        this->_isSigned = 1;
}

const char  *Form::GradeTooHighException::what(void) const throw() {
    return ("grade is to high");
}

const char  *Form::GradeTooLowException::what(void) const throw() {
    return ("grade is to low");
}

std::ostream	&operator<<(std::ostream &str, Form const &form) {
    return (str << form.getName() << ", form signing grade " << form.getGradeToSign() << ", executing grade " << form.getGradeToExec());
}