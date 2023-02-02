/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:16:26 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 17:32:03 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main(){
	ClapTrap clap("clap");
	ScavTrap scav("scav");
	FragTrap Frag("frag");
	DiamondTrap diamond("DIAMOND");


	
	diamond.attack("clap");
	clap.takeDamage(diamond.GetAttack());
	diamond.attack("scav");
	scav.takeDamage(diamond.GetAttack());
	diamond.attack("frag");
	Frag.takeDamage(diamond.GetAttack());
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();

}
