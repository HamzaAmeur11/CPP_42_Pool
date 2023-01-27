/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:13:37 by hameur            #+#    #+#             */
/*   Updated: 2023/01/26 18:11:09 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::string &line, std::string &s1, std::string &s2){
	std::string::size_type n = line.find(s1);
	while (std::string::npos != n){
		line.erase(n, s1.length());
		line.insert(n, s2);
		n = line.find(s1, n);
		if (n == 0)
			return ;
	}
}

int main(int c, char **v){
	if (c != 4)
		return (std::cout << "Error args !!" <<std::endl, 1);

	std::string line;
	std::string s1 = v[2];
	std::string s2 = v[3];
	std::string filename = v[1];
	std::ifstream MyReadFile(filename);
	if ( MyReadFile.fail() )
		return (std::cout << "invalid file !!!"<< std::endl , 2);
	std::ofstream MyFile(filename + ".replace");
	if ( MyFile.fail() )
		return (std::cout << "Error creat file" << std::endl , 3);
	if (MyReadFile.peek() == std::ifstream::traits_type::eof())
		{std::cout << "EMPTY FILE" << std::endl; return 0;}
	while (getline(MyReadFile, line)){
		replace(line, s1, s2);
		MyFile << line << std::endl;
	}
	std::cout << "Done \n" ;
	MyFile.close();
	MyReadFile.close();
}