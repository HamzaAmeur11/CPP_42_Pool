/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:25:41 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/06 02:28:29 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCatttt";
	std::cout << "WrongCat :Default Constructor Called\n";
}

WrongCat::WrongCat(const std::string &str){
	SetType(str);
	std::cout << "WrongCat :String Constructor Called\n";
}


WrongCat::WrongCat(const WrongCat &rhs): WrongAnimal(rhs){
	*this = rhs;
	std::cout << "WrongCat :Copy Constructor Called\n";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat :Destructor Called\n";
}

WrongCat &WrongCat::operator=(WrongCat const &rhs){
	SetType(rhs.type);
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat Hello\n";
}

