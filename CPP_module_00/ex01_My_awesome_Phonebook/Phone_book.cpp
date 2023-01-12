/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:35:52 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/12 02:31:38 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone_book.hpp"

PhoneBook::PhoneBook(){NumberContact = 0;}

PhoneBook::~PhoneBook(){std::cout<<"Byy"<<std::endl;}

void PhoneBook::add(){
	std::cout << " Enter First Name : ";
	std::cin >> PhoneBook::Cnt[NumberContact].FirstName;
	std::cout << "\n Enter Last Name : ";
	std::cin >> PhoneBook::Cnt[NumberContact].LastName;
	std::cout << "\n Enter Phone Number : ";
	std::cin >> PhoneBook::Cnt[NumberContact].PhoneNum;
	std::cout << "\n Enter NickName : ";
	std::cin >> PhoneBook::Cnt[NumberContact].NickName;
	std::cout << "\n Enter Darkest Secret : ";
	std::cin >> PhoneBook::Cnt[NumberContact].DarkestSecret;
	if (NumberContact <= 7)
		NumberContact++;
}

void PhoneBook::relese(){
	for (int i = 0; i < 7; i++){
		Cnt[i] = Cnt[i + 1];
	}
}

void PhoneBook::search(){
	int id;

	std::cout << "enter index of the contact : ";
	std::cin >> id;
	if (id < 0 || id > NumberContact)
		std::cout << "\nwrong err\n";
	else
		printCte(id);
}

void PhoneBook::printCte(int id){
	std::cout << "First Name : " << PhoneBook::Cnt[id].FirstName << std::endl;
	std::cout << "Last Name : " << PhoneBook::Cnt[id].LastName << std::endl;
	std::cout << "tamara DZEEB iinitializer dakxi li b9a\n";
}

