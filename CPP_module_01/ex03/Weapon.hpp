/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:41:33 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/21 23:57:54 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon{
	private:
		std::string type;
	public:
	//7aaayd default constru mn class {}
		Weapon(){};
		Weapon(std::string param);
		const std::string &getType();
		void setType(std::string param);
};

