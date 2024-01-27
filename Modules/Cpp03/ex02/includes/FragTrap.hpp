/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:28:21 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 10:44:40 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../includes/ClapTrap.hpp"

class   FragTrap: public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(std::string);
        ~FragTrap(void);
        FragTrap& operator=(const FragTrap &f);
        FragTrap(const FragTrap& s);

        void    attack(const std::string &target);
        void    highFiveGuys(void);
};

#endif