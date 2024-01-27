/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:14:48 by lucas             #+#    #+#             */
/*   Updated: 2023/09/07 11:07:43 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) {
    //std::cout << "Default constructor called" << std::endl;
    this->value = 0;
    return ;
}

Fixed::Fixed(int value) {
    //std::cout << "Int constructor called" << std::endl;
    this->value = value << this->bit;
    return ;
}

Fixed::Fixed(float value) {
    //std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1<< this->bit));
    return ;
}

Fixed::Fixed(const Fixed & f) {
    //std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(f.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& f) {
    //std::cout << "Copy assignement operator called" << std::endl;
    this->setRawBits(f.getRawBits());
    return (*this);
}

Fixed::~Fixed(void) {
    //std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}

void    Fixed::setRawBits(int const raw) {
    this->value = raw;
    return ;
}

float   Fixed::toFloat(void) const {
    return (static_cast<float>(this->value) / static_cast<float>(1 << this->bit));
}

int     Fixed::toInt(void) const {
    return (this->value >> this->bit);
}

Fixed Fixed::operator+(const Fixed &f) {
    return (this->value + f.value);
}

Fixed Fixed::operator-(const Fixed &f) {
    return (this->value - f.value);
}

Fixed Fixed::operator*(const Fixed &f) {
    return (this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) {
    return (this->toFloat() / f.toFloat());
}

Fixed Fixed::operator++(int value) {
    Fixed temp = *this;
    if (!value)
        value = 1;
    this->setRawBits(this->getRawBits() + value);
    return (temp);
}

Fixed Fixed::operator--(int value) {
    Fixed temp = *this;
    if (!value)
        value = 1;
    this->setRawBits(this->getRawBits() - value);
    return (temp);
}

Fixed Fixed::operator++(void) {
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--(void) {
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

int Fixed::operator<(const Fixed &f) {
    return (this->value < f.value);
}

int Fixed::operator>(const Fixed &f) {
    return (this->value > f.value);
}

int Fixed::operator<=(const Fixed &f) {
	return (this->value <= f.value);
}

int Fixed::operator>=(const Fixed &f) {
	return (this->value >= f.value);
}

int Fixed::operator==(const Fixed &f) {
	return (this->value == f.value);
}

int Fixed::operator!=(const Fixed &f) {
	return (this->value != f.value);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2) {
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2) {
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed) {
    out << fixed.toFloat();
	return (out);
}
