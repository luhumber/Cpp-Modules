/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:26:05 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 17:32:37 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "WrongCat constructor called" << std::endl;
    return ;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &copy) {
    std::cout << "WrongCat copied" << std::endl;
    *this = copy;
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) {
    std::cout << "WrongCat assiegned" << std::endl;
    this->_type = copy._type;
    return (*this);
}

std::string const   WrongCat::getType(void) const {
    return (this->_type);
}

void    WrongCat::setType(const std::string &type) {
    this->_type = type;
}

void    WrongCat::makeSound(void) const {
    std::cout << "WrongCat wrong miaouw song" << std::endl;
    return ;
}