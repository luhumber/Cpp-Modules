/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:26:50 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 09:32:22 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "[ScavTrap] default constructor called" << std::endl;
    this->_name = "<null>";
    this->_hp = 100;
    this->_ep = 50;
    this->_dmg = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "[ScavTrap] " << name << " constructor called" << std::endl;
    this->_name = name;
    this->_hp = 100;
    this->_ep = 50;
    this->_dmg = 20;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& s) : ClapTrap(s) {
    std::cout << "[ScavTrap] " << s._name << "copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s) {
    this->set_name(s.get_name());
    this->set_hp(s.get_hp());
    this->set_ep(s.get_ep());
    this->set_dmg(s.get_dmg());
    std::cout << "[ScavTrap] " << s._name << "assigned" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void) {
    std::cout << "[ScavTrap] " << this->_name << " destructor called" << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string &target) {
    if (this->_hp == 0)
    {
        std::cout << "[ScavTrap] " << this->_name << " is dead" << std::endl;
        return ;
    }
    if (this->_ep == 0)
    {
        std::cout << "[ScavTrap] " << this->_name << "has no more energy" << std::endl;
        return ;
    }
    std::cout << "[ScavTrap] " << this->_name << " attacks " << target << ", causing " << this->_dmg << " points of damage !" << std::endl;
    this->_ep--;
    return ;
}

void    ScavTrap::guardGate(void) {
    std::cout << "[ScavTrap] " << this->_name;
    std::cout << " enter in Gate keeper mode" << std::endl;
    return ;
}
