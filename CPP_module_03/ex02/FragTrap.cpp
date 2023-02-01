/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:02:34 by hameur            #+#    #+#             */
/*   Updated: 2023/02/01 20:59:12 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: Default constructor Called\n";
	HealthPts = 100;
	EnergyPts = 100;
	AttackDmg = 30;	
}
FragTrap::FragTrap(const std::string NewName): ClapTrap(NewName){
	std::cout << "FragTrap :String constructor Called\n";
	HealthPts = 100;
	EnergyPts = 100;
	AttackDmg = 30;	
}
FragTrap::~FragTrap(){
	std::cout << "FragTrap :Destructor Called\n";
}

void FragTrap::highFivesGuys(){
  std::cout << "FragTrap " << Name << " high fives\n";
}

FragTrap::FragTrap(const FragTrap &r){
	*this = r;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs){
	this->SetName(rhs.Name);
	this->SetHealth(rhs.HealthPts);
	this->SetEnergy(rhs.EnergyPts);
	this->SetAttack(rhs.AttackDmg);
	return *this;
}