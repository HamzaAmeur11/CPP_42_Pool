/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:20:02 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 01:27:22 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main ()
{
	int i = -1;
	Animal *animals[12];

	while (++i < 12)
	{
		if (i & 1)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	i = -1;
	while (++i < 12)
		animals[i]->makeSound();
	i = -1;
	while (++i < 12)
		delete animals[i];
}
