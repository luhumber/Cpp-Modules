/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:49:43 by lucas             #+#    #+#             */
/*   Updated: 2023/09/25 18:08:49 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class   Brain{
    private:
        std::string _idea[100];
    public:
        Brain(void);
        ~Brain(void);
        Brain(const Brain &);
        Brain& operator=(const Brain &);

        std::string const   getIdea(const int);
        void                setIdea(std::string const &, const int);
};

#endif