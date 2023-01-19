/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:40:47 by hameur            #+#    #+#             */
/*   Updated: 2023/01/19 13:47:13 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		void set_name(std::string Newname);
		~Zombie();
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);
