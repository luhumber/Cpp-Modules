/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:19:02 by humbert           #+#    #+#             */
/*   Updated: 2023/11/14 15:26:03 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class NotFoundException: public std::exception {
    virtual const char* what() const throw() {
        return ("Value not found");
    }
};

template <typename T>
void    easyfind(T &container, int to_find) {
    typename T::iterator iter = std::find(container.begin(), container.end(), to_find);
    if (iter != container.end())
        std::cout << "Item found: " << *iter << std::endl;
    else
        throw(NotFoundException());
}

#endif