/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:01:58 by hameur            #+#    #+#             */
/*   Updated: 2023/01/26 23:47:39 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
  std::cout << "[DEBUG]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
  std::cout << "[INFO]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::error(){
  std::cout << "[ERROR]" << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::warning(){
  std::cout << "[WARNING]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain( std::string level ){
	int x = -1;
	typedef void (Harl::*fcts)(void);
    fcts tab[4] = { &Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
	std::string cmnts[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
// 	enum levels{
//     DEBUG = 0,
//     INFO = 1,
//     WARNING = 2,
//     ERROR = 3
//   };
	for(int i = 0; i < 4; i++){
		if (level == cmnts[i]){
			//(this->*tab[i])();
			x = i;
			break;
    	}
	}
	switch (x)
	{
	case 0:
		(this->*tab[0])();
		break;
	case 1:
		(this->*tab[1])();
		break;
	case 2:
		(this->*tab[2])();
		break;
	case 3:
		(this->*tab[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
