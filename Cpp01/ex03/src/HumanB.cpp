/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:56:51 by lucas             #+#    #+#             */
/*   Updated: 2023/08/01 21:57:47 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;    
}

HumanB::~HumanB() {
    return ;
}

void    HumanB::attack(void)
{
    if (this->weapon == NULL || this->weapon->getType().empty())
        std::cout << this->name << " has no weapon..." << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}