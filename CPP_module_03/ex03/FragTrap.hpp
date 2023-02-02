/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:02:30 by hameur            #+#    #+#             */
/*   Updated: 2023/02/01 21:40:43 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(const std::string NewName);
		~FragTrap();
		FragTrap(const FragTrap &r);
		FragTrap &operator=(const FragTrap &rhs);
		void highFivesGuys(void);
};