/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:53:54 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 09:22:53 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);

        void    execute(Bureaucrat const & executor) const;

        class CantOpenFileException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
};

#endif