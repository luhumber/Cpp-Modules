/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:53:33 by humbert           #+#    #+#             */
/*   Updated: 2023/11/09 13:16:44 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
    int rand_num;
    static bool random = false;

    if (!random) {
        srand(time(NULL));
        random = true;
    }
    rand_num = rand() % 3 + 1;
    switch(rand_num) {
        case 1: {
            std::cout << "Create class A" << std::endl;
            return (new A);
        }
        case 2: {
            std::cout << "Create class B" << std::endl;
            return (new B);
        }
        case 3: {
            std::cout << "Create class C" << std::endl;
            return (new C);
        }
    }
    return (NULL);
}

void    identify(Base* p) {
    if (dynamic_cast<A *>(p))
        std::cout << "Base type is A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "Base type is B" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "Base type is C" << std::endl;
}

void    identify(Base& p) {
    try
    {
        if (dynamic_cast<A *>(&p))
            std::cout << "Base type is A" << std::endl;
    }
    catch(std::exception& e){}
    try
	{
		if (dynamic_cast<B *>(&p))
			std::cout << "Base type is B" << std::endl;
	}
	catch(std::exception& e){}
	try
	{
		if (dynamic_cast<C *>(&p))
			std::cout << "Base type is C" << std::endl;
	}
	catch(std::exception& e){}
}

int main()
{
	Base *rand_base = generate();
	identify(*rand_base);
	identify(rand_base);
    
    Base *rand_base2 = generate();
    identify(*rand_base2);
	identify(rand_base2);
    
	delete rand_base;
    delete rand_base2;
}