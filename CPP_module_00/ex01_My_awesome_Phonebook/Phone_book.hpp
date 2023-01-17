/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:27:22 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/14 20:58:23 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

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
		int		NumberContact;
		int		add();
		int		ReadData(std::string str, std::string &data);
		void	search();
		int		search(int id);
		void	printCte(int id);
		void	relese();
		void	printTable();
		std::string check_len(const std::string str);
};

