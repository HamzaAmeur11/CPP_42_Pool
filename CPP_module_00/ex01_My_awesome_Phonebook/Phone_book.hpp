/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:27:22 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/13 15:45:23 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact{
	public:
		std::string FirstName;
		std::string	LastName;
		std::string PhoneNum;
		std::string NickName;
		std::string DarkestSecret;
};



class PhoneBook{
	private:
		Contact Cnt[8];
	public:
		PhoneBook();
		~PhoneBook();
		int NumberContact;
		int add();
		int ReadData(std::string str, std::string &data);
		void search();
		void PrintTbl();
		void printCte(int id);
		void relese();
};

