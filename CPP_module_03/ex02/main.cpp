/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:16:26 by hameur            #+#    #+#             */
/*   Updated: 2023/02/01 18:35:56 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(){
	ScavTrap a("hamza");
	FragTrap b("sakafkaf");

	
	a.attack("sakafkaf");
	b.takeDamage(a.GetAttack());
	b.attack("hamza");
	a.takeDamage(b.GetAttack());
	a.attack("sakafkaf");
	b.takeDamage(a.GetAttack());
	b.beRepaired(6);
	a.guardGate();
	b.highFivesGuys();
}