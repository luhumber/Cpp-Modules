/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:28:26 by lucas             #+#    #+#             */
/*   Updated: 2023/07/27 15:38:19 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of str: " << &str << std::endl;
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;
}