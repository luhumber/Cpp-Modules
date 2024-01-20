/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humbert <humbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:31:09 by humbert           #+#    #+#             */
/*   Updated: 2023/11/13 00:38:10 by humbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span {
    private:
        size_t  _N;
        std::vector<int> _vec;
    public:
        Span(void);
        Span(size_t N);
        ~Span(void);
        Span(const Span &);
        Span& operator=(const Span &);

        void    addNumber(int number);
        void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int     shortestSpan(void);
        int     longestSpan(void);
        void    print(void);
        
        class StackEmptyException: public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        
        class StackFullException: public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
};

#endif