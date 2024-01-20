/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:26:01 by humbert           #+#    #+#             */
/*   Updated: 2023/10/18 14:33:27 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main(void)
{

    /*Too high*/
    try
    {
        Bureaucrat  testh("testh", 0);
        std::cout << testh << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    /*Too low*/
    try
    {
        Bureaucrat  testl("testl", 151);
        std::cout << testl << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    /*Normal upgrade*/
    try
    {
        Bureaucrat  lucas("Lucas", 2);
        std::cout << lucas << std::endl;
        lucas.upperGrade();
        std::cout << lucas << std::endl;
        lucas.upperGrade();
        std::cout << lucas << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    /*Normal downgrade*/
    try
    {
        Bureaucrat  tibo("Tibo", 149);
        std::cout << tibo << std::endl;
        tibo.lowerGrade();
        std::cout << tibo << std::endl;
        tibo.lowerGrade();
        std::cout << tibo << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    return (0);
}
