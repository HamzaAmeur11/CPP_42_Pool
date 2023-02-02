/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:39:34 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 14:02:30 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->Name = "";
	ClapTrap::Name = this->Name +  "_clap_name";
	this->HealthPts = FragTrap::HealthPts;
	this->EnergyPts = ScavTrap::EnergyPts;
	this->AttackDmg = FragTrap::AttackDmg;
	std::cout << "DiamondTrap :Default constructor Called\n";
}

void DiamondTrap::whoAmI(void){
    std::cout << "I am " << this->Name << " And my ClapTrap is " << ClapTrap::Name<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string NewName){
	this->Name = NewName;
	ClapTrap::Name = this->Name +  "_clap_name";
	this->HealthPts = FragTrap::HealthPts;
	this->EnergyPts = ScavTrap::EnergyPts;
	this->AttackDmg = FragTrap::AttackDmg;
	std::cout << "DiamondTrap :string constructor Called\n";
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap :Destructor Called\n";
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs){

}
