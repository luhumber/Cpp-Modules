/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:57:28 by lucas             #+#    #+#             */
/*   Updated: 2023/08/01 20:23:39 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon      *weapon;
        
    public:
        HumanB(std::string name);
        ~HumanB();
        
    void    attack(void);
    void    setWeapon(Weapon &weapon);
};

#endif