/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:48:36 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/26 16:18:48 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name){
	Zombie::name = name;
}

Zombie::~Zombie(){
	std::cout << name << ": Destroying...\n";
}

void	Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
