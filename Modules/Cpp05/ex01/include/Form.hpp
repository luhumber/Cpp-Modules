/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:23:13 by humbert           #+#    #+#             */
/*   Updated: 2023/10/18 21:34:33 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include "../include/Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeToSign;
        int const           _gradeToExec;
    public:
        Form(void);
        Form(std::string name, int gradeToSign, int gradeToExec);
        ~Form(void);
        Form(const Form &);
        Form& operator=(const Form &);

        const std::string   &getName(void) const;
        const bool          &getSigned(void) const;
        const int           &getGradeToSign(void) const;
        const int           &getGradeToExec(void) const;
        
        void                beSigned(Bureaucrat &bureaucrat);

        class               GradeTooHighException: public std::exception {
            public :
                virtual const char  *what(void) const throw();
        };
        class               GradeTooLowException: public std::exception {
            public :
                virtual const char  *what(void) const throw();
        };
};

std::ostream	&operator<<(std::ostream &str, Form const &form);

#endif