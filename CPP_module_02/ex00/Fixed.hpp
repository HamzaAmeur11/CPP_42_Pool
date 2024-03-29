/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:06:21 by hameur            #+#    #+#             */
/*   Updated: 2023/01/30 20:54:56 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed{
	private:
		int fx;
		static const int fractional = 8;
	public:
		Fixed();								//default constructor
		Fixed(Fixed const &rhs); 				//copy constructor
		~Fixed();								//Destructor
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed & operator=(Fixed const &rhs); 	//Copy assignment operator=>   //rhs = right hand side
};