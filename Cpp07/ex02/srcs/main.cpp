/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:59:33 by humbert           #+#    #+#             */
/*   Updated: 2023/11/14 15:06:27 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include <string>

template <typename T>
void printArray(Array<T> &a)
{
    for (unsigned int i = 0; i < a.getSize(); i++)
    {
        if (i != a.getSize() - 1)
            std::cout << a[i] << ", ";
        else
            std::cout << a[i];
    }
    std::cout << std::endl;
}

int main(void)
{
	{
		Array<int> test1(10);
		Array<int> test2;
		for (int i(0); i < 10; i++)
			test1[i] = i;
		Array<int> cpy(test1);
		test2 = test1;
		std::cout << "TEST: ";
		test1[4] = 456;
		printArray(test1);
		std::cout << "COPIE: ";
		printArray(cpy);
		std::cout << "ASSIGNE: ";
		printArray(test2);
	}
	{
		Array<int> empty;
		std::cout << "Empty: ";
		printArray(empty);
	}
	{
		Array<int> a(10);
		for (int i(0); i < 10; i++)
			a[i] = i;
		std::cout << "Int: ";
		printArray(a);
	}
	{
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "test1";
		std::cout << "String: ";
		printArray(a);
	}
	{
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "test2";
		std::cout << "String a: ";
		printArray(a);
	}
	{
		try
		{
			Array<std::string> a(10);
			for (int i(0); i < 11; i++)
				a[i] = "Fail";
			std::cout << "Fail String: ";
			printArray(a);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}