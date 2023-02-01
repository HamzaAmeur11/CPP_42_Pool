/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:39:34 by hameur            #+#    #+#             */
/*   Updated: 2023/02/01 21:29:24 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap , public FragTrap{
	private:
		std::string Name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string NewName);
		DiamondTrap(const DiamondTrap &New);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &rhs);
};