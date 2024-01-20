/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:34:32 by lucas             #+#    #+#             */
/*   Updated: 2023/09/26 10:59:48 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
    ScavTrap    lucas("Lucas");
    ClapTrap    minilou("Minilou");
    ScavTrap    prototype("Lulu");

    lucas.attack("Lulu");
    prototype.takeDamage(lucas.get_dmg());
    prototype.beRepaired(20);
    lucas.guardGate();
    minilou.attack(lucas.get_name());
    lucas.takeDamage(10);

    return (0);
}