/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:06:00 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 12:52:50 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) : _type("Default constructor called") {
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

Animal::~Animal(void) {
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal &copy) {
    std::cout << "Animal copied" << std::endl;
    *this = copy;
    return ;
}

Animal& Animal::operator=(const Animal &copy) {
    std::cout << "Animal assigned" << std::endl;
    this->_type = copy._type;
    return (*this);
}

std::string const   Animal::getType(void) const {
    return (this->_type);
}

void    Animal::setType(const std::string &type) {
    this->_type = type;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal sound" << std::endl;
    return ;
}
