/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:20:02 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 23:57:38 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main ()
{
	int i = -1;
	Animal *animals[4];
	while (++i < 4)
	{
		if (i & 1)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	i = -1;
	while (++i < 4)
		animals[i]->makeSound();
	i = -1;
	while (++i < 4)
		delete animals[i];
	while(true);
}
