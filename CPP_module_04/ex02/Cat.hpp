/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 01:23:59 by hmeur             #+#    #+#             */
/*   Updated: 2023/02/07 00:11:31 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const std::string &str);
		Cat(const Cat &rhs);
		~Cat();
		Cat &operator=(Cat const &rhs);
		void makeSound() const;
		Brain getBrain() const;
};
