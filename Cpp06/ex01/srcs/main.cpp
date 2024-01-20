/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:37:09 by humbert           #+#    #+#             */
/*   Updated: 2023/11/09 12:44:11 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Serializer.hpp"

int main()
{
    Data original_data;

    original_data.i = 42;
    original_data.c = 'C';
    original_data.d = 42.5;

	
	uintptr_t ptr = Serializer::serialize(&original_data);
	Data *serialized_data = Serializer::deserialize(ptr);

	if (&original_data == serialized_data)
	{
		std::cout << "Original_data:   " << &original_data << " | " << original_data.i << std::endl;
		std::cout << "Serialized_data: " << serialized_data << " | " << serialized_data->i << std::endl;

		std::cout << "Original_data:   " << &original_data << " | " << original_data.c << std::endl;
		std::cout << "Serialized_data: " << serialized_data << " | " << serialized_data->c << std::endl;

		std::cout << "Original_data:   " << &original_data << " | " << original_data.d << std::endl;
		std::cout << "Serialized_data: " << serialized_data << " | " << serialized_data->d << std::endl;
	}
	else 
		std::cout << "Failure" << std::endl;
	return (0);
}