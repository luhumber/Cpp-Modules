/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:29:08 by humbert           #+#    #+#             */
/*   Updated: 2023/11/09 10:58:20 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScal.hpp"
#include <iomanip>

ConvertScal::ConvertScal(void) {
    std::cout << "ConvertScal, constructor called" << std::endl;
    return ;
}

ConvertScal::~ConvertScal(void) {
    std::cout << "ConvertScal, destructor called" << std::endl;
    return ;
}

ConvertScal::ConvertScal(const ConvertScal &copy) {
    std::cout << "ConvertScal, copied" << std::endl;
    *this = copy;
    return ;
}

ConvertScal& ConvertScal::operator=(const ConvertScal &copy) {
    std::cout << "ConvertScal, assigned" << std::endl;
    (void)copy;
    return (*this);
}

bool    ConvertScal::isChar(std::string &str, int &type) {
    if (str.length() == 1 && ((str[0] > 31 && str[0] < 48) || (str[0] > 57 && str[0] < 127)))
    {
        type = CHAR;
        return (true);
    }
    return (false);
}

bool    ConvertScal::isInt(std::string &str, int &type, size_t &i) {
    i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && std::isdigit(str[i]))
        i++;
    if (i != str.length())
        return (false);
    type = INT;
    return (true);
}

bool    ConvertScal::isFloat(std::string &str, int &type, size_t &i) {
    if (str == "nan" || str == "-inf" || str == "+inf" || \
        str == "nanf" || str == "-inff" || str == "+inff")
    {
        type = STRING;
        return (true);
    }
    if (str[i] == '.')
    {
        i++;
        while (str[i])
        {
            if ((str[i] < 48 || str[i] > 57) && str[i] != 'f')
                return (false);
            if (str[i] == 'f' && i != str.length() - 1)
                return (false);
            i++;
        }
        if (str[i - 1] == 'f')
        {
            str[i - 1] = '\0';
            type = FLOAT;
            return (true);
        }
        type = DOUBLE;
        return (true);
    }
    if (str[i] == 'f' && i == str.length() - 1)
    {
        str[i] = '\0';
        type = FLOAT;
        return (true);
    }
    return (false);
}

void    ConvertScal::printChar(int type, char c, int i) {
    if (type == STRING)
        std::cout << "impossible" << std::endl;
    else if (i < 32 || i > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << c << std::endl;
}

void    ConvertScal::printInt(int type, int i, double d) {
    if (type == STRING)
        std::cout << "impossible" << std::endl;
    else if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
        std::cout << "overflow" << std::endl;
    else
        std::cout << i << std::endl;
}

void    ConvertScal::printFloat(int type, std::string str, int i, float f, double d) {
    if (type == STRING)
    {
        if (str == "nan" || str == "-inf" || str == "+inf")
            std::cout << str << "f" << std::endl;
        else
            std::cout << str << std::endl;
    }
    else if (d > std::numeric_limits<float>::max() || d < -std::numeric_limits<float>::max())
        std::cout << "overflow" << std::endl;
    else if (f - i == 0)
        std::cout << f << ".0f" << std::endl;
    else
        std::cout << f << "f" << std::endl;
}

void    ConvertScal::printDouble(int type, std::string str, int i, float f, double d) {
    if (str == "nanf")
        std::cout << "nan" << std::endl;
    else if (str == "-inff")
        std::cout << "-inff" << std::endl;
    else if (str == "+inff")
        std::cout << "+inff" << std::endl;
    else if (type == STRING)
        std::cout << str << std::endl;
    else if (d - i == 0)
        std::cout << f << ".0" << std::endl;
    else
        std::cout << d << std::endl;
}

static void printConvert(int type, char c, int i, double d, float f, std::string str) {
    std::cout << "char: ";
    ConvertScal::printChar(type, c, i);
    std::cout << "int: ";
    ConvertScal::printInt(type, i, d);
    std::cout << "float: ";
    ConvertScal::printFloat(type, str, i, f, d);
    std::cout << "double: ";
    ConvertScal::printDouble(type, str, i, f, d);
    return ;
}

void    ConvertScal::convert(std::string str) {
    int         type;
    long int    li;
    size_t      index = 0;
    char        c;
    int         i;
    float       f;
    double      d;

    if (!isChar(str, type))
        if (!isInt(str, type, index))
            if (!isFloat(str, type, index))
                type = INVALID;
    switch (type) {
        case CHAR: {
            c = str[0];
            i = static_cast<int>(c);
            f = static_cast<float>(c);
            d = static_cast<double>(c);
            break ;
        }
        case INT: {
            li = std::strtol(str.c_str(), NULL, 10);
            if (li > std::numeric_limits<int>::max() || li < std::numeric_limits<int>::min())
            {
                std::cout << "ERROR: 'int' type is impossible to convert (overflow)" << std::endl;
                return ;
            }
            i = static_cast<int>(li);
            c = static_cast<char>(i);
            d = static_cast<double>(i);
            f = static_cast<float>(i);
            break ;
        }
        case FLOAT: {
            f = std::strtof(str.c_str(), NULL);
            if (f == HUGE_VAL)
            {
                std::cout << "ERROR: 'int' type is impossible to convert (overflow)" << std::endl;
                return ;
            }
            c = static_cast<char>(f);
            i = static_cast<int>(f);
            d = static_cast<float>(f);
            break ;
        }
        case DOUBLE: {
            d = std::strtod(str.c_str(), NULL);
            if (d == HUGE_VAL)
            {
				std::cout << "ERROR: 'int' type is impossible to convert (overflow)" << std::endl;
				return ;
			}
            c = static_cast<char>(d);
            i = static_cast<int>(d);
            f = static_cast<float>(d);
            break ;
        }
        case STRING: {
            break ;
        }
        default: {
            break ;
        }
    }
    if (type == INVALID)
        return ;
    printConvert(type, c, i, d, f, str);
}
