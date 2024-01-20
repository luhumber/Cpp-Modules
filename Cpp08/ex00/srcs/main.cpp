/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:25:45 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 00:28:26 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	{
		std::vector<int> vec;

		for(int i = 0; i < 100; i++)
			vec.push_back(i);
		try
		{
			easyfind(vec, 0);
			easyfind(vec, 42);
			easyfind(vec, 99);
			easyfind(vec, 100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}