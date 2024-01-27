/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:55:21 by humbert           #+#    #+#             */
/*   Updated: 2023/10/19 13:47:48 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <stdlib.h>
# include <time.h>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm &);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &);

        void    execute(Bureaucrat const & executor) const;
};

#endif