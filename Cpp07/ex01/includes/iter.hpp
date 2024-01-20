/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:51:38 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 00:01:33 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template<typename T>
void    iter(T *array, int length, void (*f)(T const &)) {
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template<typename T>
void    print(T const &array) {
    std::cout << "> " << array << std::endl;
}

#endif