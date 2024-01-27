/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:54:09 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 08:59:05 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137) {
    std::cout << "SHRUBBERY, constructor called" << std::endl;
    this->_target = "target";
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137) {
    std::cout << "SHRUBERRY, constructor called" << std::endl;
    this->_target = target;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "SHRUBBERY, destructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
    std::cout << "SHRUBBERY, copied" << std::endl;
    *this = copy;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    std::cout << "SHUBBERY, assigned" << std::endl;
    this->_target = copy._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExec())
		throw(AForm::GradeTooLowException());
	else if (this->getSigned() == 0)
		throw(AForm::NotSignedException());
	std::ofstream file;
	file.open((this->_target + "_shrubbery").c_str());
	if (file.fail())
		throw(ShrubberyCreationForm::CantOpenFileException());
	file << "		      &&& &&  & &&" << std::endl;
	file << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
	file << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	file << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	file << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	file << "     &&     \\|||" << std::endl;
	file << "             |||" << std::endl;
	file << "             |||" << std::endl;
	file << "             |||" << std::endl;
	file << "       , -=-~  .-^- _" << std::endl;
	file.close();
	(void)executor;
}

const char  *ShrubberyCreationForm::CantOpenFileException::what(void) const throw() {
    return ("the file cannot be opened");
}
