/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:44:36 by hameur            #+#    #+#             */
/*   Updated: 2023/01/30 19:27:33 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main () {
	
	Fixed       a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a " << a << std::endl;
	std::cout << "++a "<< ++a << std::endl;
	std::cout << "a "<< a << std::endl;
	std::cout << "a++ "<< a++ << std::endl;
	std::cout << "a "<< a << std::endl;

	std::cout << "b "<< b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}