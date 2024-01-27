/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:21:31 by lucas             #+#    #+#             */
/*   Updated: 2023/07/25 13:58:35 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        std::string secret;
    
    public:
        Contact();
        ~Contact();

        Contact(std::string first_name, std::string last_name,
            std::string nickname, std::string number, std::string secret);
        int     isNull(Contact contact);
        void    print_info(Contact contact, int index);
        void    print_all(Contact contact);
};

#endif