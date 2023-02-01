/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:06:21 by hameur            #+#    #+#             */
/*   Updated: 2023/01/30 21:26:02 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed{
	private:
		int fx;
		static const int fractional = 8;
	public:
		Fixed();
		Fixed(Fixed const &rhs);
		Fixed(const int&);
		Fixed(const float&);
		~Fixed();
		int toInt(void)const;
		float toFloat(void)const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		//comparison operators: >, <, >=, <=, == and != .
		// rhs = right hand side
		bool 	operator>(Fixed const &rhs);
		bool 	operator>=(Fixed const &rhs);
		bool 	operator<(Fixed const &rhs);
		bool 	operator<=(Fixed const &rhs);
		bool 	operator==(Fixed const &rhs);
		bool 	operator!=(Fixed const &rhs);

		//arithmetic operators: +, -, *, and / .
		Fixed &operator+(Fixed const &rhs);
		Fixed &operator-(Fixed const &rhs);
		Fixed &operator*(Fixed const &rhs);
		Fixed &operator/(Fixed const &rhs);

		//increment / decrement operateurs f++ ++f f-- and --f .
		Fixed &operator++();
		Fixed &operator++(int);
		Fixed &operator--();
		Fixed &operator--(int);

		Fixed & operator=(Fixed const &rhs);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);	
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);	

};


std::ostream& operator<<(std::ostream& out, const Fixed& c);
