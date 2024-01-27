/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:54:41 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 18:11:13 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain constructor called" << std::endl;
    return ;
}

Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain copied" << std::endl;
    *this = copy;
    return ;
}

Brain& Brain::operator=(const Brain &copy) {
    std::cout << "Brain assigned" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_idea[i] = copy._idea[i];
    return (*this);
}

std::string const   Brain::getIdea(const int i) {
    if (i < 0 || i >= 100)
        return ("Wrong index");
    return (this->_idea[i]);
}

void    Brain::setIdea(std::string const &idea, const int i) {
    if (i < 0 || i >= 100)
        std::cout << "Wrong index" << std::endl;
    else
        this->_idea[i] = idea;
}
