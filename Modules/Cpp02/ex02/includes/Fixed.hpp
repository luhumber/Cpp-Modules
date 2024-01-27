/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:14:55 by lucas             #+#    #+#             */
/*   Updated: 2023/09/07 11:08:39 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    private:
        int                 value;
        static const int    bit = 8;

    public:
        Fixed(void);
        Fixed(int);
        Fixed(float);
        Fixed(const Fixed &);
        Fixed & operator=(const Fixed&);
        ~Fixed(void);

        float   toFloat( void ) const;
        int     toInt( void ) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        Fixed operator+ (const Fixed &f);
        Fixed operator- (const Fixed &f);
        Fixed operator* (const Fixed &f);
        Fixed operator/ (const Fixed &f);

        Fixed operator++ (int);
        Fixed operator-- (int);
        Fixed operator++ (void);
        Fixed operator-- (void);

        int operator< (const Fixed &f);
        int operator> (const Fixed &f);
        int operator<= (const Fixed &f);
        int operator>= (const Fixed &f);
        int operator== (const Fixed &f);
        int operator!= (const Fixed &f);

        static const Fixed  &min(const Fixed &f1, const Fixed &f2);
        static const Fixed  &max(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif