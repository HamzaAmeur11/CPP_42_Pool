/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:30:17 by hameur            #+#    #+#             */
/*   Updated: 2023/02/07 00:24:31 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain :Defaullt constructor Called\n";
}

Brain::Brain(const Brain &ref){
    *this = ref;
    std::cout << "Brain :Copy constructor Called\n";
}

Brain::~Brain(){
    std::cout << "Brain :Destructor Called\n";
}

Brain &Brain::operator=(const Brain &ref){
    for (int i = 0; i < 99; i++)
		ideas[i] = ref.ideas[i];
	return *this;
}

std::string &Brain::getIdeas(const int i){
	if (i < 0 || i > 99)
		std::cout << "i out of rang [0 > i > 99]\n";
	return (ideas[i]);
}

void Brain::setIdeas(const int i,const std::string &set){
	if (i < 0 || i > 99)
		std::cout << "i out of rang [0 > i > 99]\n";
	ideas[i] = set;
}

