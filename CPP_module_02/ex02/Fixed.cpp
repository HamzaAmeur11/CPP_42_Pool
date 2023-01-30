/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:27:32 by hameur            #+#    #+#             */
/*   Updated: 2023/01/30 13:23:46 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fx(0){
	std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const int &x):fx(x << fractional){
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float &f){
	std::cout << "float constructor called" << std::endl;
	fx = roundf(f * (1 << fractional));
}


Fixed::Fixed(Fixed const &rhs){
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}
void Fixed::setRawBits( int const raw ){
	this->fx = raw;
}

int Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called" << std::endl;
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


int Fixed::toInt(void) const{
  return (fx >> fractional);
}

float Fixed::toFloat(void) const{
  float r = (float(fx) / (1 << fractional));
  return r;
}

std::ostream &operator<<(std::ostream &out, const Fixed &c){
  out << float(c.toFloat());
  return (out);
}
