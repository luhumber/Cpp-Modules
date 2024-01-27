/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:25:45 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 14:46:43 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal constructor called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "WrongAnimal copied" << std::endl;
    *this = copy;
    return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) {
    std::cout << "WrongAnimal assigned" << std::endl;
    this->_type = copy._type;
    return(*this);
}

std::string const   WrongAnimal::getType(void) const {
    return this->_type;
}

void    WrongAnimal::setType(const std::string &type) {
    this->_type = type;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal wrong animal sound" << std::endl;
    return ;
}