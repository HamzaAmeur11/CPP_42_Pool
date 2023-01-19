/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:01:52 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/19 13:54:04 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	std::string name = "Zombies";
	Zombie* zombies = zombieHorde(5, name);
	if (zombies != NULL)
		delete[] zombies;
	return 0;
}
