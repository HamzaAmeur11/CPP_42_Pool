/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:16:26 by hameur            #+#    #+#             */
/*   Updated: 2023/02/01 17:03:57 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(){
	ScavTrap a("hamza");
	ClapTrap b("sakafkaf");
	
	ClapTrap c(b);

	
	a.attack("sakafkaf");
	c.takeDamage(a.GetAttack());
	a.attack("sakafkaf");
	a.guardGate();
	c.takeDamage(a.GetAttack());
	c.beRepaired(6);
}