/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:19:41 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/06 02:22:47 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal :Default constructor Called !\n";
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type){
	std::cout << "WrongAnimal :String Constructor Called \n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs){
	*this = rhs;
	std::cout << "WrongAnimal :Copy Constructor Called\n";
}


WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal :Destructor Called\n";
}

void WrongAnimal::SetType(const std::string &str){
	type = str;
}

std::string WrongAnimal::GetType() const{
	return type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs){
	this->type = rhs.type;
	return *this;
}


void WrongAnimal::makeSound() const{
	std::cout <<  "WrongAnimal Sound !!!!.....\n";
}

