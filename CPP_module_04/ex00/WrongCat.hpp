/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:24:00 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/06 02:25:33 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const std::string &str);
		WrongCat(const WrongCat &rhs);
		~WrongCat();
		WrongCat &operator=(WrongCat const &rhs);
		void makeSound() const;
};
