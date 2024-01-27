/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:06:06 by lucas             #+#    #+#             */
/*   Updated: 2023/09/06 10:47:21 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		Zombie *horde = zombieHorde(10, "Zombie_LULU");
		delete [] horde;
	}
	if (argc == 2)
	{
		int number = atoi(argv[1]);
		if (number > 0)
		{
			Zombie *horde = zombieHorde(number, "RandomZombie");
			delete [] horde;
		}
		else
			return (1);
	}
	return (0);
}
