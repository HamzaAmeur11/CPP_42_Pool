/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:01:58 by hameur            #+#    #+#             */
/*   Updated: 2023/01/24 23:56:41 by hameur           ###   ########.fr       */
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
	typedef void (Harl::*fcts)(void);
    fcts tab[4] = { &Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
	std::string cmnts[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	for(int i = 0; i < 4; i++){
		if (level == cmnts[i]){
			(this->*tab[i])();
			return ;
    	}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
