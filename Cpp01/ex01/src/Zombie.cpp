/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:06:22 by lucas             #+#    #+#             */
/*   Updated: 2023/07/27 14:13:48 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() {
    return;
}

Zombie::~Zombie(void) {
    std::cout << name << " died" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::give_name(std::string name)
{
	this->name = name;
}