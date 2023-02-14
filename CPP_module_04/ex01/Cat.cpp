/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:27:49 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 23:56:04 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cattttt";
	this->brain = new Brain;
	std::cout << "Cat :Default Constructor Called\n";
}

Cat::Cat(const std::string &str){
	this->brain = new Brain;
	SetType(str);
	std::cout << "Cat :String Constructor Called\n";
}


Cat::Cat(const Cat &rhs): Animal(rhs){
	
	this->brain = new Brain;
	*this = rhs;
	*brain = *rhs.brain;
	std::cout << "Cat :Copy Constructor Called\n";
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat :Destructor Called\n";
}

Cat &Cat::operator=(Cat const &rhs){
	delete brain;
	this->brain = rhs.brain;
	SetType(rhs.type);
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Cat Hello 🐱\n";
}

Brain Cat::getBrain() const{
	return *brain;
}
