/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:51:17 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/22 17:42:14 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string param){setType(param);}
void	Weapon::setType(std::string param){
	type = param;
	//std::cout << "Ovrloding cnst : type of weapon :: "<< type << std::endl;
}
const std::string &Weapon::getType(){return type;}
