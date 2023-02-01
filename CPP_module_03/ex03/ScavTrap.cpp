/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:44:39 by hameur            #+#    #+#             */
/*   Updated: 2023/02/01 18:24:24 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap: Default constructor Called\n";
	HealthPts = 100;
	EnergyPts = 50;
	AttackDmg = 20;	
}
ScavTrap::ScavTrap(const std::string NewName): ClapTrap(NewName){
	std::cout << "ScavTrap :String constructor Called\n";
	HealthPts = 100;
	EnergyPts = 50;
	AttackDmg = 20;	
}
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap :Destructor Called\n";
}

void ScavTrap::attack(const std::string &target){
	if (EnergyPts == 0 || HealthPts == 0){
		std::cout << "ScavTrap " << Name << " Can't Attack" << std::endl;
		return ;
	}
	EnergyPts--;
	std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
	return ;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode\n";
}