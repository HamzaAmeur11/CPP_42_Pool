/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:02:47 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 01:44:23 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal :Default constructor Called !\n";
}

Animal::Animal(const std::string &type) : type(type){
	std::cout << "Animal :String Constructor Called \n";
}

Animal::Animal(Animal const &rhs){
	*this = rhs;
	std::cout << "Animal :Copy Constructor Called\n";
}


Animal::~Animal(){
	std::cout << "Animal :Destructor Called\n";
}

void Animal::SetType(const std::string &str){
	type = str;
}

std::string Animal::GetType() const{
	return type;
}

Animal &Animal::operator=(Animal const &rhs){
	this->type = rhs.type;
	return *this;
}


/*void Animal::makeSound() const{
	std::cout <<  "Aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.....\n";
}*/
