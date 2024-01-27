/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:59:30 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 11:10:30 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    {
        std::cout << "\n------- MUTANT STACK INT -------\n\n" << std::endl;
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        std::cout << "Top element: " << mstack.top() << std::endl;
        std::cout << "Size: " << mstack.size() << std::endl;
        mstack.pop();
        
        std::cout << "Top element: " << mstack.top() << std::endl;
        std::cout << "Size: " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        std::cout << "\n------- LIST & MUTANTSTACK -------\n\n" << std::endl;
        std::list<int> mlist;
        MutantStack<int> mstack;
        mlist.push_back(5);
        mstack.push(5);
        mlist.push_back(17);
        mstack.push(17);
        std::cout << "MutantStack top element: " << mstack.top() << std::endl;
        std::cout << "MutantStack size: " << mstack.size() << std::endl;
        std::cout << "List top element: " << mlist.back() << std::endl;
        std::cout << "List size: " << mlist.size() << std::endl;
        mstack.pop();
        mlist.pop_back();
        std::cout << "MutantStack top element: " << mstack.top() << std::endl;
        std::cout << "MutantStack size: " << mstack.size() << std::endl;
        std::cout << "List top element: " << mlist.back() << std::endl;
        std::cout << "List size: " << mlist.size() << std::endl;
        mlist.push_back(3);
        mstack.push(3);
        mlist.push_back(5);
        mstack.push(5);
        mlist.push_back(737);
        mstack.push(737);
        mlist.push_back(0);
        mstack.push(0);
        MutantStack<int>::iterator its = mstack.begin();
        std::list<int>::iterator itl = mlist.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++its;
        --its;
        ++itl;
        --itl;
        while (its != ite)
        {
            std::cout << *its << " | " << *itl << std::endl;
            ++its;
            ++itl;
        }
    }
}