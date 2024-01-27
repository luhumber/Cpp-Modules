/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:34:32 by lucas             #+#    #+#             */
/*   Updated: 2023/09/26 10:53:17 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap    clapA("Lucas");
    ClapTrap    clapB("Tibo");

    clapA.attack(clapB.get_name());
    clapB.takeDamage(clapA.get_dmg());
    clapA.beRepaired(2);

    return (0);
}