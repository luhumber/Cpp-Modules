/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:48:12 by lucas             #+#    #+#             */
/*   Updated: 2023/09/06 22:04:27 by lucas            ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif