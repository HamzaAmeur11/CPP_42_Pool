/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:35:52 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/13 20:40:18 by hameur           ###   ########.fr       */
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

std::string PhoneBook::check_len(const std::string str){
	if (str.length() < 10)
		return str;
	else
		return str.substr(0, 9);
}

void PhoneBook::printTable()
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|" << "    Id    " << "|" << "  F Name  " << "|" << "  L Name  " << "|" << " NickName " << "|" ;
	for (int x = 0 ; x < NumberContact ; x++){
		std::cout << "\n_____________________________________________" << std::endl;
		std::cout << std::setw(10) << x << "|" ;
		std::cout << std::setw(10) << check_len(Cnt[x].FirstName) << "|";
		std::cout << std::setw(10) << check_len(Cnt[x].LastName) << "|";
		std::cout << std::setw(10) << check_len(Cnt[x].NickName) << "|";
	}
		std::cout << "\n_____________________________________________" << std::endl;
}

void PhoneBook::search(){
	std::string id;
	int			id_;

	printTable();
	std::cout << "enter index of the contact : ";
	std::cin >> id_;
	if (!getline(std::cin , id)){
		std::cout << "Bad Err\n";
		return ;
	}
	if (std::cin.fail() || std::cin.eof())
		return ;
	id_ = std::stoi(id);
	if (id_ < 0 || id_ > NumberContact)
		std::cout << "wrong err\n";
	else
		printCte(id_);
}

void PhoneBook::printCte(int id){
	std::cout << "First Name : " << PhoneBook::Cnt[id].FirstName << std::endl;
	std::cout << "Last Name  : " << PhoneBook::Cnt[id].LastName << std::endl;
	std::cout << "Phone Num  : " << PhoneBook::Cnt[id].LastName << std::endl;
	std::cout << "NickName   : " << PhoneBook::Cnt[id].LastName << std::endl;
	std::cout << "DarSecret  : " << PhoneBook::Cnt[id].LastName << std::endl;
}

