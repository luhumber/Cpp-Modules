/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:16 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 13:27:23 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class   Cat : public Animal {
    private:

    public:
        Cat(void);
        ~Cat(void);
        Cat(const Cat &);
        Cat& operator=(const Cat &);

        std::string const   getType(void) const;
        void                setType(const std::string &);

        void                makeSound(void) const;        
};

#endif