/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:26:04 by humbert           #+#    #+#             */
/*   Updated: 2023/11/05 16:35:02 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "../include/AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        std::string const   _name;
        int                 _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat &);
        Bureaucrat& operator=(const Bureaucrat &);

        const std::string   &getName(void) const;
        const int           &getGrade(void) const;
        void                upperGrade(void);
        void                lowerGrade(void);

        void                signForm(AForm &form);
        void                executeForm(AForm const & form);
        
        class               GradeTooHighException: public std::exception {
            public :
                virtual const char  *what(void) const throw();
        };
        class               GradeTooLowException: public std::exception {
            public :
                virtual const char  *what(void) const throw();
        };

         class               NotSignedException: public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        
        class               AlreadySignedException: public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
};
        
std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);

#endif