/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:48:05 by lucas             #+#    #+#             */
/*   Updated: 2023/09/07 11:03:02 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
    return ;
}

Fixed::Fixed(int value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value << this->bit;
    return ;
}

Fixed::Fixed(float value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1<< this->bit));
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

float   Fixed::toFloat( void ) const {
    return (static_cast<float>(this->value) / static_cast<float>(1 << this->bit));
}

int     Fixed::toInt( void ) const {
    return (this->value >> this->bit);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed) {
    out << fixed.toFloat();
	return (out);
}
