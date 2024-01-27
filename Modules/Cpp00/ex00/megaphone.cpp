/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:40:23 by lucas             #+#    #+#             */
/*   Updated: 2023/06/24 18:01:05 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ios>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 0; ++i < argc;)
    {
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)std::toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return (0);
}
