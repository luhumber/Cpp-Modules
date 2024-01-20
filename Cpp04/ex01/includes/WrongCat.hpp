/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:32 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 17:25:47 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "../includes/WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {
    private:

    public:
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(const WrongCat &);
        WrongCat& operator=(const WrongCat &);

        std::string const   getType(void) const;
        void                setType(const std::string &);

        void                makeSound(void) const;
};

#endif
