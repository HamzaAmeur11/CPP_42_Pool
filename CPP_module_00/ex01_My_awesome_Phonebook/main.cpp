/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 01:25:38 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/14 02:26:16 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone_book.hpp"

int main()
{
	PhoneBook book;
	std::string str;

	while(42)
	{
		std::cout << "Enter ADD || SEARCH || EXIT : ";
		if (!getline(std::cin, str))
			return (1);
		if (str.length() == 0){
			continue;
		}else if (str == "EXIT"){
			return 0;
		}else if (str == "ADD" && book.NumberContact <= 7){
			book.add();
		}else if (str == "ADD" && book.NumberContact == 8){
			book.NumberContact--;
			book.relese();
			book.add();
		}else if (str == "SEARCH"){
			book.search();
		}else
			std::cout << "Bad Command !!??\n";
	}
	return (0);
}
