/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 01:25:38 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/13 15:24:23 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone_book.hpp"

int main()
{
	PhoneBook book;
	std::string str;

	while(42)
	{
		std::cout << "Enter ADD || SEARCH || EXIT\n";
		if (!getline(std::cin, str))
			return (1);
		//if (!(std::cin >> str))
		//		return 1;
		std::cout << str<< std::endl;
		if (str == "EXIT")
			return (std::cout << "Byyy\n", 0);
		else if (str == "ADD" && book.NumberContact < 7)
			book.add();
		else if (str == "ADD" && book.NumberContact == 7){
			book.relese();
			book.add();
		}
		else if (str == "SEARCH")
			book.search();
		else
			std::cout << "AX KADIIR A SHBYY ??\n";


	}
	return (0);
}
