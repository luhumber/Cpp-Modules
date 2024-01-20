/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:06:22 by lucas             #+#    #+#             */
/*   Updated: 2023/07/27 12:01:21 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {
    std::cout << name << " is create" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << name << " died" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}