/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:19:16 by lucas             #+#    #+#             */
/*   Updated: 2023/07/25 11:34:12 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook   rep;
    int         i;
    
    i = 0;
    while (1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        command.erase(0, command.find_first_not_of(" \t\v\f\r"));
        while (isspace(command.length() - 1))
            command.erase(command.find_last_not_of(" \t\v\f\r") + 1, command[command.length() - 1]);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            i = rep.too_many(rep);
            if (i >= 8)
            {
                std::cout << "Too many contacts ! Do you want to delete the oldest one ? (Y/N): ";
                std::getline(std::cin, command);
                command.erase(0, command.find_first_not_of(" \t\v\f\r"));
                while (isspace(command.length() - 1))
                    command.erase(command.find_last_not_of(" \t\v\f\r") + 1, command[command.length() - 1]);
                if (command == "Y")
                {
                    rep = rep.del_one(rep);
                    i = 7;
                }
                else if (command == "N")
                    i = -1;
            }
            if (i >= 0)
                rep = rep.add_one(rep, i);
        }
        else if (command == "SEARCH")
            rep.display_rep(rep);
        else if (command.empty())
            continue;
        else
            std::cout << "Command not found." << std::endl;
    }
    
    return (0);
}