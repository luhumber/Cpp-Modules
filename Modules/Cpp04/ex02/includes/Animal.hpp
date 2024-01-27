/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:07 by lucas             #+#    #+#             */
/*   Updated: 2023/09/27 10:54:27 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
        Animal(void);
        virtual ~Animal(void);
        Animal(const Animal &);
        Animal& operator=(const Animal &);
        
        std::string const   getType(void) const;
        void                setType(const std::string &);

        virtual void    makeSound(void) const = 0;
};

#endif