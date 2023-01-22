/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:15:53 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/22 17:56:02 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string Name, Weapon& waeponType);
		void attack();
		void setName(std::string Name);
		void setType(std::string newWeapon);
};
