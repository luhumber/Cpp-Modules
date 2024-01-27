/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:41 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 13:01:52 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


#define N_ANIMALS 10

int main(void)
{
	std::cout << "---- MILOU --------" << std::endl;
	Dog	milou;
	milou.makeSound();
	
	std::cout << "---- GARFIELD -----" << std::endl;
	Cat	garfield;
	garfield.makeSound();

	//Animal	TEST;
	
	return (0);
}