/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:55:19 by humbert           #+#    #+#             */
/*   Updated: 2023/10/19 13:03:27 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm &);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &);

        void    execute(Bureaucrat const & executor) const;
};

#endif