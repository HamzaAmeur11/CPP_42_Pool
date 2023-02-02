/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:44:38 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 16:19:36 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(const std::string NewName);
		~ScavTrap();
		void attack(const std::string &target);
		void guardGate();
};
