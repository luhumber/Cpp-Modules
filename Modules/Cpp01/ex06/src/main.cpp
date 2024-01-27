/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:37:23 by luhumber          #+#    #+#             */
/*   Updated: 2023/08/02 21:51:25 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int Harl_filter(std::string level)
{
    std::string state[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
        if (state[i] == level)
            return (i);
    return (-1);
}

void    Harl_switch(std::string level, Harl &Harl)
{
    switch (Harl_filter(level))
    {
        case 0:
            Harl.complain("DEBUG");
        case 1:
            Harl.complain("INFO");
        case 2:
            Harl.complain("WARNING");
        case 3:
            Harl.complain("ERROR");
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main(int argc, char **argv)
{
    Harl    Harl;

    if (argc != 2)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    else    
        Harl_switch(argv[1], Harl);
    return (0);
}
