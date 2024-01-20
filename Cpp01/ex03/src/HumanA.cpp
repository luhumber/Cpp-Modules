/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:56:43 by lucas             #+#    #+#             */
/*   Updated: 2023/08/01 21:52:46 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA() {
    return ;
}

void    HumanA::attack()
{
    if (this->weapon.getType().empty())
        std::cout << this->name << " has no weapon..." << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}