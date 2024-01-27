/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:06:06 by lucas             #+#    #+#             */
/*   Updated: 2023/09/06 10:32:21 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie  *new_zombie;
	
	new_zombie = newZombie("Lulu");
	new_zombie->announce();
	delete new_zombie;
	randomChump("Random_Zomb");
	return (0);
}
