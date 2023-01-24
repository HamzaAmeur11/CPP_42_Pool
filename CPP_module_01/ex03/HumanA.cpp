/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:53:21 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/22 18:04:03 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& weaponType): weapon(weaponType){
	setName(Name);
	// std::cout << "ovr : HumanA weapon            " << weaponType.getType() <<std::endl;
}

void HumanA::setName(std::string Name){name = Name;}

void HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void HumanA::setType(std::string newWeapon){this->weapon.setType(newWeapon);}
