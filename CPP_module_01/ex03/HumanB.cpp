/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:08:46 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/22 00:04:19 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName){
	setName(newName);
	weapon = NULL;
}

void HumanB::setName(std::string newName){name = newName;}

std::string &HumanB::getName(){return name;}

void HumanB::setWeapon(Weapon newWeapon){
	weapon = &newWeapon;
}

void HumanB::attack(){
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
