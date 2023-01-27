/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:40:47 by hameur            #+#    #+#             */
/*   Updated: 2023/01/26 16:24:11 by hameur           ###   ########.fr       */
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
		void set_name(std::string Newname);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);