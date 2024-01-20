/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:34:24 by lucas             #+#    #+#             */
/*   Updated: 2023/09/07 15:08:15 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    protected:
        std::string _name;
        int         _hp;
        int         _ep;
        int         _dmg;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &);
        ClapTrap & operator=(const ClapTrap&);
        ~ClapTrap();

        std::string get_name(void) const;
        int         get_hp(void) const;
        int         get_ep(void) const;
        int         get_dmg(void) const;

        void    set_name(std::string const new_name);
        void    set_hp(int const new_hp);
        void    set_ep(int const new_ep);
        void    set_dmg(int const new_dmg);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif