/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:29:10 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 09:24:53 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "[FragTrap] construcor called" << std::endl;
    this->_name = "<null>";
    this->_hp = 100;
    this->_ep = 100;
    this->_dmg = 30;
    return ;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "[FragTrap] constructor " << name << " called" << std::endl;
    this->_name = name;
    this->_hp = 100;
    this->_ep = 100;
    this->_dmg = 30;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& f)
{
    this->_name = f._name;
	this->_dmg = f._dmg;
	this->_ep = f._ep;
	this->_hp = f._hp;
    std::cout << "[FragTrap] " << f._name << " assigned" << std::endl;
	return (*this);
}

FragTrap::FragTrap(const FragTrap& f): ClapTrap(f) {
    std::cout << "[FragTrap] " << f._name << " copied" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "[FragTrap] " << this->_name << " destructor called" << std::endl;
    return ;
}

void    FragTrap::attack(const std::string &target) {
    if (this->_hp == 0)
    {
        std::cout << "[FragTrap] " << this->_name << "is dead" << std::endl;
        return ;
    }
    if (this->_ep == 0)
    {
        std::cout << "[FragTrap] " << this->_name << "has no more energy" << std::endl;
        return ;
    }
    std::cout << "[FragTrap] " << this->_name << " attacks " << target << ", causing " << this->_dmg << " points of damage !" << std::endl;
    this->_ep--;
    return ;
}

void    FragTrap::highFiveGuys(void) {
    std::cout << "[FragTrap] " << this->_name << " ask you a high fives" << std::endl;
    return ;
}