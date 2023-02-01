/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:44:38 by hameur            #+#    #+#             */
/*   Updated: 2023/02/01 20:56:41 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(const std::string NewName);
		~ScavTrap();
		ScavTrap(const ScavTrap &r);
		ScavTrap & operator=(const ScavTrap &rhs);
		void attack(const std::string &target);
		void guardGate();
};