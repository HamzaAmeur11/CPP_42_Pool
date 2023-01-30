/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:27:32 by hameur            #+#    #+#             */
/*   Updated: 2023/01/29 22:48:34 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fx(0){
	std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(int x):fx(x){
	std::cout << "Copy constructor called" << std::endl;
}


Fixed::Fixed(Fixed const &rhs){
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}
void Fixed::setRawBits( int const raw ){
	this->fx = raw;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fx;
}


Fixed & Fixed::operator=(Fixed const &rhs){ // rhs = right hand side
	std::cout << "Copy assignment operator called " << std::endl ;
	setRawBits(rhs.getRawBits());
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}