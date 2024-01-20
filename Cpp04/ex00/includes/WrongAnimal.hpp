/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:22:36 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 14:25:32 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class   WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        virtual ~WrongAnimal(void);
        WrongAnimal(const WrongAnimal &);
        WrongAnimal& operator=(const WrongAnimal &);

        std::string const   getType(void) const;
        void                setType(const std::string &);

        void                makeSound(void) const;
};

#endif