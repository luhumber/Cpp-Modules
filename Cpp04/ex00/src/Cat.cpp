/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:52 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 13:51:04 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    return ;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << "Cat copied" << std::endl;
    *this = copy;
    return ;
}

Cat& Cat::operator=(const Cat &copy) {
    std::cout << "Cat assigned" << std::endl;
    Animal::operator=(copy);
    return (*this);
}

std::string const   Cat::getType(void) const {
    return (this->_type);
}

void    Cat::setType(const std::string &type) {
    this->_type = type;
}

void    Cat::makeSound(void) const {
    std::cout << "Cat : 'Miaouu'" << std::endl;
    return ;
}