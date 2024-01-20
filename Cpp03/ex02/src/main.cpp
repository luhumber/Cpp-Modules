/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:34:32 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 09:23:27 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void)
{
    ClapTrap    a("Lucas");
    FragTrap    z("TomiTom");
    ClapTrap    b("Zinzin");
    ScavTrap    c("Tibo");

    a.attack(b.get_name());
    b.takeDamage(a.get_dmg());
    b.beRepaired(2);
    c.attack(a.get_name());
    a.takeDamage(c.get_dmg());
    c.guardGate();
    z.highFiveGuys();

    return (0);
}