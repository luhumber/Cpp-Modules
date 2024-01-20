/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:41 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 17:40:13 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main( void )
{
	const Animal* meta				= new Animal();
	const WrongAnimal* wrong_meta	= new WrongAnimal();
	const Animal* dog				= new Dog();
	const Animal* cat				= new Cat();
	const WrongAnimal* wrong_cat	= new WrongCat();
	
	meta->makeSound();
	wrong_meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrong_cat->makeSound();
	
	delete meta;
	delete wrong_meta;
	delete dog;
	delete cat;
	delete wrong_cat;

	return (0);
}