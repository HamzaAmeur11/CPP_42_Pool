/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:44:13 by hameur            #+#    #+#             */
/*   Updated: 2023/01/19 13:00:44 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie	*heap_zombie = newZombie("Heap Zombie");
	heap_zombie->announce();
	delete heap_zombie;

	randomChump("Stack Zombie");
	return 0;
}
