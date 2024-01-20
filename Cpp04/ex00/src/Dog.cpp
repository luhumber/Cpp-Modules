/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:48 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 13:57:46 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    return ;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog copied" << std::endl;
    *this = copy;
    return ;
}

Dog& Dog::operator=(const Dog &copy) {
    std::cout << "Dog assigned" << std::endl;
    Animal::operator=(copy);
    return (*this);
}

std::string const   Dog::getType(void) const {
    return (this->_type);
}

void    Dog::setType(const std::string &type) {
    this->_type = type;
    return ;
}

void    Dog::makeSound(void) const {
    std::cout << "Dog : 'Ouaf'" << std::endl;
    return ;
}
