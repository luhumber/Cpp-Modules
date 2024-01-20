/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:59:24 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 01:07:03 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) {
    return ;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {
    return ;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy) {
    *this = copy;
    return ;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &copy) {
    (void)copy;
    return (*this);
}
