/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:30:17 by hameur            #+#    #+#             */
/*   Updated: 2023/02/06 19:34:03 by hameur           ###   ########.fr       */
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

