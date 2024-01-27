/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:59:13 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 01:03:59 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

template <typename T>
class MutantStack: public std::stack<T> {
    private:

    public:
        MutantStack(void);
        ~MutantStack(void);
        MutantStack(const MutantStack &);
        MutantStack& operator=(const MutantStack &);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin(){
            return (this->c.begin());
        }
        iterator    end() {
            return (this->c.end());
        }
};

#include "MutantStack.tpp"

#endif