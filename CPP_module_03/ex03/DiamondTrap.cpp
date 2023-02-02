/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:39:34 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 16:17:28 by hmeur            ###   ########.fr       */
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

DiamondTrap::DiamondTrap(const std::string NewName){
	this->Name = NewName;
	ClapTrap::Name = this->Name +  "_clap_name";
	this->HealthPts = FragTrap::HealthPts;
	this->EnergyPts = ScavTrap::EnergyPts;
	this->AttackDmg = FragTrap::AttackDmg;
	std::cout << "DiamondTrap :string constructor Called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &New){
	*this = New;
	std::cout << "DiamondTrap :Copy constructor Called\n";
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap :Destructor Called\n";
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs){
	this->Name = rhs.Name;
	ClapTrap::Name = rhs.Name + "_clap_name";
	this->AttackDmg = rhs.AttackDmg;
	this->HealthPts = HealthPts;
	this->EnergyPts = EnergyPts;
	return *this;
}

void DiamondTrap::whoAmI(void){
    std::cout << "I am " << this->Name << " And my ClapTrap is " << ClapTrap::Name<< std::endl;
}
