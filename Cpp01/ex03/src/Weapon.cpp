/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:56:26 by lucas             #+#    #+#             */
/*   Updated: 2023/09/06 11:02:43 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{   
    this->type = type;
}

Weapon::~Weapon() {
    return ;
}

std::string const   Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
