/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:02:59 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/19 13:54:10 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){
	Zombie* zombies;

	if (N <= 0){
		std::cout << "enter Number > 0\n";
		return (NULL);
	}
	zombies = new Zombie [N];
	for (int i = 0; i < N; i++) {
		zombies[i].set_name(name);
		zombies[i].announce();
	}
	return zombies;
}


