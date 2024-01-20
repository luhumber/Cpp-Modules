/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:57:11 by lucas             #+#    #+#             */
/*   Updated: 2023/08/01 21:46:55 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon();

	std::string const	getType(void);
	void				setType(std::string type);
};

#endif