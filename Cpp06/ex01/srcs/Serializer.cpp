/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:37:37 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 17:49:07 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer(void) {
    std::cout << "Serializer: Constructor called" << std::endl;
    return ;
}

Serializer::~Serializer(void) {
    std::cout << "Serializer: Destructor called" << std::endl;
    return ;
}

Serializer::Serializer(const Serializer &copy) {
    std::cout << "Serializer copied" << std::endl;
    *this = copy;
    return ;
}

Serializer& Serializer::operator=(const Serializer &copy) {
    std::cout << "Serializer assigned" << std::endl;
    (void)copy;
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}
