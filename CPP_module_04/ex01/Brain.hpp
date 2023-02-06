/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:16:45 by hameur            #+#    #+#             */
/*   Updated: 2023/02/06 19:31:40 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &ref);
		~Brain();
		Brain &operator=(const Brain &ref);
		void setIdeas(const int i,const std::string &set);
		std::string &getIdeas(const int i);	
};