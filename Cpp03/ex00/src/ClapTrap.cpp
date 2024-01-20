/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:34:39 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 09:24:21 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    std::cout << "[ClapTrap] constructor called" << std::endl;
    this->_name = "<null>";
    this->_hp = 10;
    this->_ep = 10;
    this->_dmg = 0;
    return ;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "[ClapTrap] constructor " << name << " called" << std::endl;
    this->_name = name;
    this->_hp = 10;
    this->_ep = 10;
    this->_dmg = 0;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& c) {
    this->set_name(c.get_name());
    this->set_hp(c.get_hp());
    this->set_ep(c.get_ep());
    this->set_dmg(c.get_dmg());
    std::cout << "[ClapTrap] " << c._name << " copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
    this->set_name(c.get_name());
    this->set_hp(c.get_hp());
    this->set_ep(c.get_ep());
    this->set_dmg(c.get_dmg());
    std::cout << "[ClapTrap] " << c._name << " assigned" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "[ClapTrap] " << this->_name << " destructor called" << std::endl;
    return ;
}

std::string ClapTrap::get_name(void) const {
    return (this->_name);
}

int ClapTrap::get_hp(void) const {
    return (this->_hp);
}

int ClapTrap::get_ep(void) const {
    return (this->_ep);
}

int ClapTrap::get_dmg(void) const {
    return (this->_dmg);
}

void    ClapTrap::set_name(std::string const new_name) {
    this->_name = new_name;
    return ;
}

void    ClapTrap::set_hp(int const new_hp) {
    this->_hp = new_hp;
    return ;
}

void    ClapTrap::set_ep(int const new_ep) {
    this->_ep = new_ep;
    return ;
}

void    ClapTrap::set_dmg(int const new_dmg) {
    this->_dmg = new_dmg;
    return ;
}

void    ClapTrap::attack(const std::string& target) {
    if (this->_hp == 0)
    {
        std::cout << "[ScavTrap] " << this->_name << " is dead" << std::endl;
        return ;
    }
    if (this->_ep <= 0)
    {
        std::cout << "[ClapTrap] " << this->_name << " has no more energy" << std::endl;
        return ;
    }
    std::cout << "[ClapTrap] " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_dmg << " points of damage !" << std::endl;
    this->_ep--;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    this->_hp -= amount;
    if (this->_ep <= 0)
    {
        std::cout << "[ClapTrap] " << this->_name << " has no more energy" << std::endl;
        return ;
    }
    this->_ep--;
    std::cout << "[ClapTrap] " << this->_name;
    std::cout << " take " << amount << " points of damage !" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->_ep == 0)
    {
        std::cout << "[ClapTrap] " << this->_name << "has no more energy" << std::endl;
        return ;
    }
    this->_hp += amount;
    this->_ep--;
    std::cout << "[ClapTrap] " << this->_name;
    std::cout << " repaired of " << amount << " point of health !" << std::endl;
    return ;
}
