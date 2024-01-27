/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:16 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 21:20:01 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal {
    private:
        Brain   *_brain;
    public:
        Cat(void);
        ~Cat(void);
        Cat(const Cat &);
        Cat& operator=(const Cat &);

        std::string const   getType(void) const;
        void                setType(const std::string &);
        Brain               *getBrain(void) const;
        void                setBrain(Brain *);

        void                makeSound(void) const;        
};

#endif