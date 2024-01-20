/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:16:51 by humbert           #+#    #+#             */
/*   Updated: 2023/11/08 22:38:58 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

template<typename T>
const T & max(const T & A, const T & B) {
    return (A > B ? A : B);
}

template<typename T>
const T & min(const T & A, const T & B) {
    return (A < B ? A : B);
}

template<typename T>
void swap(T & A, T & B) {
    T   swap;

    swap = A;
    A = B;
    B = swap;
}

#endif