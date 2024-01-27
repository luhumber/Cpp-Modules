/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:06:15 by lucas             #+#    #+#             */
/*   Updated: 2023/07/27 11:59:51 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce(void);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif