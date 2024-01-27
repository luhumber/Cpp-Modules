/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:21:40 by lucas             #+#    #+#             */
/*   Updated: 2023/07/25 11:56:28 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook 
{
    private:
        Contact contacts[9];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        PhoneBook   add_one(PhoneBook rep, int i);
        PhoneBook   del_one(PhoneBook rep);
        int         too_many(PhoneBook rep);
        void        display_rep(PhoneBook rep);  
};

#endif