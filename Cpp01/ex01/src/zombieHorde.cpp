/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:58:46 by lucas             #+#    #+#             */
/*   Updated: 2023/07/27 14:14:18 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* Horde = new Zombie[N];
    while (N--)
    {
        Horde[N].give_name(name);
        Horde[N].announce();   
    }
    return (Horde);
}