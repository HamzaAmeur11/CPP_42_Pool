/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:27:49 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/06 02:01:44 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cattttt";
	std::cout << "Cat :Default Constructor Called\n";
}

Cat::Cat(const std::string &str){
	SetType(str);
	std::cout << "Cat :String Constructor Called\n";
}


Cat::Cat(const Cat &rhs): Animal(rhs){
	*this = rhs;
	std::cout << "Cat :Copy Constructor Called\n";
}

Cat::~Cat(){
	std::cout << "Cat :Destructor Called\n";
}

Cat &Cat::operator=(Cat const &rhs){
	SetType(rhs.type);
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Cat Hello\n";
}
