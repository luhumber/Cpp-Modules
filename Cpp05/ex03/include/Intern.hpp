/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:49:17 by humbert           #+#    #+#             */
/*   Updated: 2023/11/05 15:52:50 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
    private:

    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern &);
        Intern& operator=(const Intern &);

        AForm   *makeForm(std::string, std::string);
        class   InvalidNameFormException: public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
};

#endif