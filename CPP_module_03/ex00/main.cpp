/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:16:26 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 17:35:44 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(){
	ClapTrap a("hamza");
	ClapTrap b("sakafkaf");
	ClapTrap c(b);

	
	a.attack("sakafkaf");
	c.takeDamage(a.GetAttack());
	c.beRepaired(6);
}