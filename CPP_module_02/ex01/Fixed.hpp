/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:06:21 by hameur            #+#    #+#             */
/*   Updated: 2023/01/29 22:52:05 by hameur           ###   ########.fr       */
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
		Fixed(int x);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed & operator=(Fixed const &rhs); // rhs = right hand side
};