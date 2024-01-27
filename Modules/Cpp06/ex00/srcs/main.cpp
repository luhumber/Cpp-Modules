/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:28:58 by humbert           #+#    #+#             */
/*   Updated: 2023/11/09 10:28:18 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ConvertScal.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (std::cout << "Error: <usage> : ./convert <char, int, float, double>" << std::endl, 1);
	}
	ConvertScal convert;
	convert.convert(argv[1]);
	return (0);
}
