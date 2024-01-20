/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:23:13 by humbert           #+#    #+#             */
/*   Updated: 2023/11/06 09:17:04 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include "../include/Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeToSign;
        int const           _gradeToExec;
    public:
        AForm(void);
        AForm(std::string name, int gradeToSign, int gradeToExec);
        virtual ~AForm(void);
        AForm(const AForm &);
        AForm& operator=(const AForm &);

        const std::string   &getName(void) const;
        const bool          &getSigned(void) const;
        const int           &getGradeToSign(void) const;
        const int           &getGradeToExec(void) const;
        
        void                beSigned(Bureaucrat &bureaucrat);

        virtual void    execute(Bureaucrat const & executor) const = 0;

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

std::ostream	&operator<<(std::ostream &str, AForm const &aform);

#endif