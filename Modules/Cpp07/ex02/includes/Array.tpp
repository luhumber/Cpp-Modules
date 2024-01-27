/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:02:12 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 13:50:52 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void):_size(0) {
    this->_array = new T[0];
    return ;
}

template <typename T>
Array<T>::Array(size_t n): _size(n) {
    this->_array = new T[n];
    return ;
}

template <typename T>
Array<T>::~Array(void) {
    delete[] this->_array;
    return ;
}

template <typename T>
Array<T>::Array(const Array &copy) {
    this->_size = copy._size;
    this->_array = new T[this->_size];
    for (size_t i = 0; i < this->_size; i++)
        this->_array[i] = copy._array[i];
    return ;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &copy) {
    this->_size = copy._size;
    delete[] this->_array;
    this->_array = new T[this->_size];
    for (size_t i = 0; i < this->_size; i++)
        this->_array[i] = copy._array[i];
    return (*this);
}

template <typename T>
size_t  Array<T>::getSize(void) const {
    return (this->_size);
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const {
    if (i >= this->_size)
        throw Array<T>::OutOfBounds();
    return (this->_array[i]);
}

template <typename T>
const char  *Array<T>::OutOfBounds::what(void) const throw() {
    return ("Out of bounds");
}
