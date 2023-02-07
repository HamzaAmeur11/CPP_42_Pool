/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:11:43 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 01:25:18 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string &type);
		Animal(Animal const &rhs);
		virtual ~Animal();
		Animal &operator=(Animal const &rhs);
		void SetType(const std::string &str);
		std::string GetType(void) const;
		virtual void makeSound() const = 0;

};
