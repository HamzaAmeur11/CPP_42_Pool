/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:40:06 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 00:15:00 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dogggggggg";
	std::cout << "Dog :Default Constructor Called\n";
}

Dog::Dog(const std::string &str){
	SetType(str);
	std::cout << "Dog :String Constructor Called\n";
}


Dog::Dog(const Dog &rhs) :Animal(rhs){
	*this = rhs;
	std::cout << "Dog :Copy Constructor Called\n";
}

Dog::~Dog(){
	std::cout << "Dog :Destructor Called\n";
}

Dog &Dog::operator=(Dog const &rhs){
	SetType(rhs.type);
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Dog Hello 🐶\n";
}

Brain Dog::getBrain() const{
	return *brain;
}
