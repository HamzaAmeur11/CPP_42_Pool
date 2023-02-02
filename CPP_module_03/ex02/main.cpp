/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:16:26 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 18:46:03 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(){
	ScavTrap scav("Scav");
	FragTrap frag("Frag");
	//virtual function ex
	ClapTrap clp("aaaa");
	ClapTrap *clap = &scav;
	
	clap->attack("aaaaaaa");
	scav.attack("Frag");
	frag.takeDamage(scav.GetAttack());
	frag.attack("Scav");
	scav.takeDamage(frag.GetAttack());
	scav.attack("Frag");
	frag.takeDamage(scav.GetAttack());
	frag.beRepaired(6);
	scav.guardGate();
	frag.highFivesGuys();
}