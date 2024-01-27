/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:48:31 by lucas             #+#    #+#             */
/*   Updated: 2023/09/06 18:17:23 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private:
        int                 value;
        static const int    bit = 8;

    public:
        Fixed(void);
        Fixed(const Fixed &);
        Fixed & operator=(const Fixed&);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif