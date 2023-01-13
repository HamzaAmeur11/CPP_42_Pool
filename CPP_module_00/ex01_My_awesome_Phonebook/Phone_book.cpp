/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:35:52 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/13 16:04:40 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone_book.hpp"

PhoneBook::PhoneBook(){NumberContact = 0;}

PhoneBook::~PhoneBook(){std::cout<<"Byy"<<std::endl;}

int PhoneBook::ReadData(std::string str, std::string &data)
{
	std::cout << str;
	if (!getline(std::cin, data) || data.length() == 0)
		return (std::cout << "Bad Error\n", 1);
	return (0);
}

int PhoneBook::add(){
	if (ReadData("\tEnter First Name     : " , PhoneBook::Cnt[NumberContact].FirstName))
		return 1;

	if(ReadData("\tEnter Last Name      : " , PhoneBook::Cnt[NumberContact].LastName))
		return 1;

	if(ReadData("\tEnter Phone Number   : " , PhoneBook::Cnt[NumberContact].PhoneNum))
		return 1;

	if (ReadData("\tEnter NickName       : " , PhoneBook::Cnt[NumberContact].NickName))
		return 1;

	if(ReadData("\tEnter Darkest Secret : ", PhoneBook::Cnt[NumberContact].DarkestSecret))
		return 1;

	if (NumberContact <= 7)
		NumberContact++;
	std::cout<<std::endl;
	return 0;
}

void PhoneBook::relese(){
	for (int i = 0; i < 7; i++){
		Cnt[i] = Cnt[i + 1];
	}
}

void PhoneBook::PrintTbl(){

}

void PhoneBook::search(){
	int id;

	PrintTbl();
	std::cout << "enter index of the contact : ";
	if (!(std::cin >> id) || std::cin.eof())
		return ;
	if (id < 0 || id > NumberContact)
		std::cout << "wrong err\n";
	else
		printCte(id);
}

void PhoneBook::printCte(int id){
	std::cout << "First Name : " << PhoneBook::Cnt[id].FirstName << std::endl;
	std::cout << "Last Name : " << PhoneBook::Cnt[id].LastName << std::endl;
	std::cout << "tamara DZEEB iinitializer dakxi li b9a\n";
}

