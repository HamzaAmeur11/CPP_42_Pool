/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:53:57 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 17:48:44 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HealthPts(10) , EnergyPts(10) , AttackDmg(0){
	std::cout << "ClapTrap :Default constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string NewName) : Name(NewName), HealthPts(10) , EnergyPts(10) , AttackDmg(0){
	std::cout << "ClapTrap :String constructor Called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &r){
	*this = r;
	std::cout << "ClapTrap :Copy Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap :Destructor called" << std::endl;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &rhs){
	AttackDmg = rhs.GetAttack();
	EnergyPts = rhs.GetEnergy();
	HealthPts = rhs.GetHealth();
	Name = rhs.GetName();
	return *this;
}


int ClapTrap::GetAttack() const {return AttackDmg;}
int ClapTrap::GetEnergy() const {return EnergyPts;}
int ClapTrap::GetHealth() const {return HealthPts;}
std::string ClapTrap::GetName() const {return Name;}

void ClapTrap::SetName(std::string Newname){Name = Newname;}
void ClapTrap::SetHealth(int Health){HealthPts = Health;}
void ClapTrap::SetAttack(int Attack){AttackDmg = Attack;}
void ClapTrap::SetEnergy(int Energy){EnergyPts = Energy;}

void ClapTrap::attack(const std::string &target){
	if (EnergyPts == 0 || HealthPts <= 0){
		std::cout << "ClapTrap " << Name << " Can't Attack" << std::endl;
		return ;
	}
	EnergyPts--;
	std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (HealthPts > 0){
		std::cout << Name << " takes " << amount << " amount of damage!\n";
		HealthPts -= amount;
	}
	else
		std::cout << Name << " Died !\n";
}

void ClapTrap::beRepaired(unsigned int amount){
	if (EnergyPts == 0 || HealthPts <= 0){
		std::cout << Name << " Can't Repaire" << std::endl;
		return ;
	}
	EnergyPts--;
	HealthPts += amount;
	std::cout << Name << " repaired with "<< amount <<  " amount of health points!\n";
}