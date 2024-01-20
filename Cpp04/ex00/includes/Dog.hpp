/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:05:26 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 13:56:08 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class   Dog : public Animal {
    private:

    public:
        Dog(void);
        ~Dog(void);
        Dog(const Dog &);
        Dog& operator=(const Dog &);

        std::string const   getType(void) const;
        void                setType(const std::string &);

        void                makeSound(void) const;
};

#endif