/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeur <hmeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:58:24 by hmeur             #+#    #+#             */
/*   Updated: 2023/01/19 14:31:45 by hmeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "memory addrs of str    : " << &str << std::endl;
	std::cout << "memory addrs of strPTR : " << strPTR << std::endl;
	std::cout << "memory addrs of strREF : " << &strREF << std::endl;

	std::cout << "value of str    : " << str << std::endl;
	std::cout << "value of strPTR : " << *strPTR << std::endl;
	std::cout << "value of strREF : " << strREF << std::endl;

}
