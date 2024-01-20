/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:52:34 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 17:55:53 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>

class Base {
    private:

    public:
        virtual ~Base(void);
};

class A: public Base {};
class B: public Base {};
class C: public Base {}; 

#endif