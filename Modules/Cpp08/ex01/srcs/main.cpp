/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:30:48 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 00:57:28 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		try
		{
			std::cout << "\n\n------- FULL -------\n\n" << std::endl;
			Span stack(100);
			for(int i = 0; i < 100; i++)
				stack.addNumber(i);
			stack.addNumber(100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout  << "\n\n------- NOT FILLED -------\n" << std::endl;
		Span stack(4);
		try
		{
			stack.addNumber(1);
			std::cout << "Max span: " << stack.longestSpan() << std::endl;
			std::cout << "Min span: " << stack.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\n------- MAX & MIN SPAN -------\n" << std::endl;
		Span stack(5);
		try
		{
			stack.addNumber(6);
			stack.addNumber(3);
			stack.addNumber(17);
			stack.addNumber(9);
			stack.addNumber(11);
			std::cout << "Max span: " << stack.longestSpan() << std::endl;
			std::cout << "Min span: " << stack.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\n------- BIG STACK-------\n" << std::endl;
		Span stack(10042);
		std::vector<int> s1;
		try
		{
			for(int i(0); i < 10042; i++)
				s1.push_back(i);
			stack.addNumber(s1.begin(), s1.end());
			std::cout << "Max span: " << stack.longestSpan() << std::endl;
			std::cout << "Min span: " << stack.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    {
        std::cout << "\n\n------- SUBJECT TEST -------\n" << std::endl;
        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
        return (0);
    }
}
