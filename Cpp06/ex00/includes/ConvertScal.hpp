/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:29:23 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 16:35:15 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTSCAL_HPP
#define CONVERTSCAL_HPP

# include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <stdlib.h>

enum {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID,
    STRING
};

class   ConvertScal {
    private:

    public:
        ConvertScal(void);
        ~ConvertScal(void);
        ConvertScal(const ConvertScal &);
        ConvertScal& operator=(const ConvertScal &);

        static int  getType(void);

        static void convert(std::string str);
        static bool isChar(std::string &str, int &type);
        static bool isInt(std::string &str, int &type, size_t &index);
        static bool isFloat(std::string &str, int &type, size_t &index);
        
        static void printChar(int type, char c, int i);
        static void printInt(int type, int i, double d);
        static void printFloat(int type, std::string str, int i, float f, double d);
        static void printDouble(int type, std::string str, int i, float f, double d);
};

std::ostream &operator<<( std::ostream &out, ConvertScal const &convert );

#endif