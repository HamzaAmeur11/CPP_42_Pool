/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:38:44 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/06 02:01:22 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const std::string &str);
		Dog(const Dog &rhs);
		~Dog();
		Dog &operator=(Dog const &rhs);
		void makeSound() const;
};
