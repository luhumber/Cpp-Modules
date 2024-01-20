/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:37:23 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 17:48:21 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct  Data {
    int     i;
    char    c;
    double  d;  
};

class Serializer {
    private:

    public:
        Serializer(void);
        ~Serializer(void);
        Serializer(const Serializer &);
        Serializer& operator=(const Serializer &);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif