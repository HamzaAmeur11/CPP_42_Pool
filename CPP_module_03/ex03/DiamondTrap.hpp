/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:39:38 by hameur            #+#    #+#             */
/*   Updated: 2023/02/02 13:47:23 by hmeur            ###   ########.fr       */
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
		using ScavTrap::attack;
		void whoAmI();
};
