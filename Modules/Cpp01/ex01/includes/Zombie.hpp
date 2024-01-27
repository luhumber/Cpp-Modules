/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:06:15 by lucas             #+#    #+#             */
/*   Updated: 2023/09/06 10:45:21 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();

        void    announce(void);
        void    give_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif