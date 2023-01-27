/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:40:47 by hameur            #+#    #+#             */
/*   Updated: 2023/01/26 16:19:41 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#	include <string>
#	include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string Newname);
		void	announce(void);
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);