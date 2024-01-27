/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:48:33 by lucas             #+#    #+#             */
/*   Updated: 2023/09/06 21:46:40 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
    return ;
}

Fixed::Fixed(const Fixed & f) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(f.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& f) {
    std::cout << "Copy assignement operator called" << std::endl;
    this->setRawBits(f.getRawBits());
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}

void    Fixed::setRawBits(int const raw) {
    this->value = raw;
    return ;
}
