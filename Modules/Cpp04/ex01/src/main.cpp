/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:41 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 12:58:55 by luhumber         ###   ########.fr       */
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
int		max = 4;
	int		i;
	Animal	*animals[max];
	
	for (i = 0; i < max / 2; i++)
	{
		animals[i] = new Dog();
	}
	for (i = max / 2; i < max; i++)
	{
		animals[i] = new Cat();
	}
	
	for (i = 0; i < max; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
	}
	
	for (i = 0; i < max; i++)
	{
		delete animals[i];
	}
	
	Dog	*milou = new Dog();
	milou->getBrain()->setIdea("My name is Milou!", 0);

	std::cout << "Milou idea: " << milou->getBrain()->getIdea(0) << std::endl;
	

	delete	milou;
	
	Dog	basic;
	{
		Dog	tmp = basic;
	}

	return (0);
}