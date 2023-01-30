/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:06:21 by hameur            #+#    #+#             */
/*   Updated: 2023/01/30 13:20:23 by hmeur            ###   ########.fr       */
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
		Fixed & operator=(Fixed const &rhs); // rhs = right hand side
};


std::ostream& operator<<(std::ostream& out, const Fixed& c);
