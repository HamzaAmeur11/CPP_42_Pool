/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:08:46 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/22 22:10:05 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName){
	setName(newName);
	weapon = nullptr;
}

void HumanB::setName(std::string newName){this->name = newName;}

std::string &HumanB::getName(){return this->name;}

void HumanB::setWeapon(Weapon &newWeapon){
	this->weapon = &newWeapon;
}

void HumanB::attack(){
	if (this->weapon == nullptr){
		std::cout << this->name << " not have a weapon" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
