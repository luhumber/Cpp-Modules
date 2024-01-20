/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:37:33 by luhumber          #+#    #+#             */
/*   Updated: 2023/08/02 16:17:57 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
    return ;
}

Harl::~Harl() {
    return ;
}

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string state[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void        (Harl::*p[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int         i = 0;

    while (i < 4 && state[i].compare(level) != 0)
        i++;
    if (i > 3)
        std::cout << "Probably complaining about insignificant problems" << std::endl;
    if (i < 4)
        (this->*p[i])();
}