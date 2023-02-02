/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:16:26 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 17:42:01 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(){
	ScavTrap scav("Scav");
	ClapTrap clap("clap");

	
	scav.attack("clap");
	clap.takeDamage(scav.GetAttack());
	scav.attack("clap");
	scav.guardGate();
	clap.takeDamage(scav.GetAttack());
	clap.beRepaired(6);
}