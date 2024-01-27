/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:43:33 by humbert           #+#    #+#             */
/*   Updated: 2023/11/08 23:02:50 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
    private:
        T       *_array;
        size_t  _size;
    public:
        Array(void);
        Array(size_t n);
        ~Array(void);
        Array(const Array &);
        Array& operator=(const Array &);
        
        size_t  getSize(void) const;
        T &operator[](unsigned int i) const;
        class   OutOfBounds: public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
};

# include "Array.tpp"

#endif
