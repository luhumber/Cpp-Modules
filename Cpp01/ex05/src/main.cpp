/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhumber <luhumber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:37:23 by luhumber          #+#    #+#             */
/*   Updated: 2023/09/06 11:38:54 by luhumber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(void)
{
    Harl    Harl;
    
    Harl.complain("DEBUG");
    Harl.complain("INFO");
    Harl.complain("WARNING");
    Harl.complain("ERROR");
    Harl.complain("1");
    return (0);
}
