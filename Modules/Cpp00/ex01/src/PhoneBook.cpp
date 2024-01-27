/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:32:37 by lucas             #+#    #+#             */
/*   Updated: 2023/07/25 14:04:42 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

std::string add_info(std::string msg)
{
    std::string str;
    
    std::cout << msg;
    while (1)
    {
        std::getline(std::cin, str);
        if (!str.empty())
        {
            str.erase(0, str.find_first_not_of(" \t\v\f\r"));
            while (isspace(str[str.length() - 1]))
                str.erase(str.find_last_not_of(" \t\v\r\f") + 1, str[str.length() - 1]);
        }
        if (str.empty())
            std::cout << "Empty input, try again..." << std::endl << msg;
        else
            break;
    }
    return (str);
}

PhoneBook   PhoneBook::add_one(PhoneBook rep, int i)
{
    Contact new_contact(add_info("First name: "), add_info("Last name: "),
                        add_info("Nickname: "), add_info("Phone number: "),
                        add_info("Darkest secret: "));
    rep.contacts[i] = new_contact;
    return (rep);
}

int	PhoneBook::too_many(PhoneBook rep)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (rep.contacts[i].isNull(rep.contacts[i]))
			break;	
		i++;
	}
	return (i);
}

PhoneBook   PhoneBook::del_one(PhoneBook rep)
{
    int i;

    i = 0;
    while (i < 7)
    {
        rep.contacts[i] = rep.contacts[i + 1];
        i++;
    }
    return (rep);
}

int isnum(std::string str, int i)
{
    if (str.size() != 1)
        return (0);
    if (48 <= str[0] && str[0] <= 48 + i)
        return (1);
    return (0);
}

void   PhoneBook::display_rep(PhoneBook rep)
{
    int         i;
    int         max;
    std::string index;

    i = 0;
    if (rep.contacts[0].isNull(rep.contacts[0]))
    {
        std::cout << "The phonebook is empty" << std::endl;    
        return ;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    while (i < 8)
    {
        if (rep.contacts[i].isNull(rep.contacts[i]))
            break ;
        std::cout << "|" << std::setw(10) << i << "|";
        contacts[i].print_info(contacts[i], 1);
        std::cout << "|";
        contacts[i].print_info(contacts[i], 2);
        std::cout << "|";
        contacts[i].print_info(contacts[i], 3);
        std::cout << "|\n";
        std::cout << "|-------------------------------------------|" << std::endl;
        i++;
    }
    max = i - 1;
    while (1)
    {
        std::cout << "Select an index for more info: ";
        std::getline(std::cin, index);
        index.erase(0, index.find_first_not_of(" \t\v\f\r"));
            while (isspace(index[index.length() - 1]))
                index.erase(index.find_last_not_of(" \t\v\r\f") + 1, index[index.length() - 1]);
        if (index.empty())
            continue ;
        if (isnum(index, max))
            i = (int)index[0] - 48;
        else
        {
            std::cout << "Enter a valid number: " << std::endl;
            continue ;
        }
        rep.contacts[i].print_all(rep.contacts[i]);
        break ;
    }
}


