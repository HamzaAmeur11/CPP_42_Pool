/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:40:47 by hameur            #+#    #+#             */
/*   Updated: 2023/01/19 00:56:54 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie(std::string Newname);
		~Zombie();
		void	announce(void);
};


void	randomChump(std::string name);
Zombie* newZombie(std::string name);
