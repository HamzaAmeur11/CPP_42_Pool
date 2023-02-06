/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:13:47 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/06 02:19:21 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(WrongAnimal const &rhs);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &rhs);
		void SetType(const std::string &str);
		std::string GetType(void) const;
		void makeSound() const;

};
