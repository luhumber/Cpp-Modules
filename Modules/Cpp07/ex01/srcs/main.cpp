/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:51:45 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 13:51:26 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

#define LENGTH 3

int main()
{
	int			tab[LENGTH] = {1, 2, 3};
	double		d_tab[LENGTH] = {2.12, 3.1, 9.4};
	std::string strings[LENGTH] = {"Paris", "London", "Berlin"};

	iter(tab, LENGTH, print);
	std::cout << std::endl;
	iter(d_tab, LENGTH, print);
	std::cout << std::endl;
	iter(strings, LENGTH, print);
	std::cout << std::endl;
}