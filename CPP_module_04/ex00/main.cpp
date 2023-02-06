/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:41:39 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/06 17:22:39 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->GetType() << " " << std::endl;
	std::cout << i->GetType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	std::cout << x->GetType() << std::endl;
	meta2->makeSound();
	x->makeSound();
	delete i;
	delete j;
	delete meta;
	delete x;
	delete meta2;

return 0;
}
