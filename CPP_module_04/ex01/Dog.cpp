/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:40:06 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 23:57:05 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dogggggggg";
	this->brain = new Brain;
	std::cout << "Dog :Default Constructor Called\n";
}

Dog::Dog(const std::string &str){
	SetType(str);
	this->brain = new Brain;
	std::cout << "Dog :String Constructor Called\n";
}


Dog::Dog(const Dog &rhs) :Animal(rhs){
	*this = rhs;
	this->brain = new Brain;
	std::cout << "Dog :Copy Constructor Called\n";
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog :Destructor Called\n";
}

Dog &Dog::operator=(Dog const &rhs){
	delete brain;
	this->brain = rhs.brain;
	SetType(rhs.type);
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Dog Hello 🐶\n";
}

Brain Dog::getBrain() const{
	return *brain;
}
