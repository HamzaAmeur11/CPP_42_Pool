/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:45:37 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 18:44:34 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class ClapTrap{
	
	protected:
		std::string Name;
		int HealthPts;
		int EnergyPts;
		int AttackDmg;
	public:
		ClapTrap();
		ClapTrap(std::string NewName);
		ClapTrap(ClapTrap const &r);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const &rhs);
		void SetName(std::string NewName);
		void SetHealth(int Health);
		void SetEnergy(int Energy);
		void SetAttack(int Attack);
		std::string GetName(void) const ;
		int GetHealth() const; 
		int GetEnergy() const;
		int GetAttack() const;

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

