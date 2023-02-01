/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:27:32 by hameur            #+#    #+#             */
/*   Updated: 2023/01/30 21:29:53 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fx(0){}

Fixed::Fixed(const int &x):fx(x << fractional){}

Fixed::Fixed(const float &f){
	fx = roundf(f * (1 << fractional));
}


Fixed::Fixed(Fixed const &rhs){
	*this = rhs;
}
void Fixed::setRawBits( int const raw ){
	this->fx = raw;
}

int Fixed::getRawBits( void ) const{
	return this->fx;
}


Fixed::~Fixed(){
}


int Fixed::toInt(void) const{
  return (fx >> fractional);
}

float Fixed::toFloat(void) const{
  float r = (float(fx) / (1 << fractional));
  return r;
}

std::ostream &operator<<(std::ostream &out, const Fixed &c){
  out <<  c.toFloat();
  return (out);
}

// rhs = right hand side
/*________Operators___________*/

Fixed & Fixed::operator=(Fixed const &rhs){ 
	setRawBits(rhs.getRawBits());
	return *this;
}

//comparison operators: >, <, >=, <=, == and !=.

bool Fixed::operator>(Fixed const &rhs){
	return (this->fx > rhs.fx);
}
bool Fixed::operator>=(Fixed const &rhs){
	return (this->fx >= rhs.fx);
}
bool Fixed::operator<(Fixed const &rhs){
	return (this->fx < rhs.fx);
}
bool Fixed::operator<=(Fixed const &rhs){
	return (this->fx <= rhs.fx);
}
bool Fixed::operator==(Fixed const &rhs){
	return (this->fx == rhs.fx);
}
bool Fixed::operator!=(Fixed const &rhs){
	return (this->fx != rhs.fx);
}

//arithmetic operators: +, -, *, and /.
Fixed&Fixed::operator+(Fixed const &rhs){
	this->setRawBits(this->getRawBits() + rhs.getRawBits());
	return *this;
}
Fixed&Fixed::operator-(Fixed const &rhs){
	this->setRawBits(this->getRawBits() - rhs.getRawBits());
	return *this;
}
Fixed&Fixed::operator*(Fixed const &rhs){
	this->setRawBits((this->toFloat() * rhs.toFloat()) * (1 << this->fractional));
	return *this;
}
Fixed&Fixed::operator/(Fixed const &rhs){
	this->setRawBits((this->toFloat() / rhs.toFloat()) * (1 << this->fractional));
	return *this;
}

//increment / decrement operateurs f++ ++f f-- and --f .

//post-increment a++
Fixed &Fixed::operator++(int) {
    Fixed *tmp = new Fixed(*this);
    fx++;
    return (*tmp);
}

//pre-increment ++a
Fixed &Fixed::operator++() {
    fx++;
    return (*this);
}
Fixed &Fixed::operator--(int) {
    Fixed *tmp = new Fixed(*this);
    fx--;
    return (*tmp);
}

Fixed &Fixed::operator--() {
    fx--;
    return (*this);
}


Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a <= b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if ((Fixed)a <= (Fixed)b)
		return a;
	else
		return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a <= b)
		return b;
	else
		return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if ((Fixed)a <= (Fixed)b)
		return b;
	else
		return a;
}