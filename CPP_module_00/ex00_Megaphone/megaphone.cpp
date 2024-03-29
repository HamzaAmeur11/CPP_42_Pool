/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hameur <hameur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:45:36 by hameur            #+#    #+#             */
/*   Updated: 2023/01/16 12:45:39 by hameur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int c , char **v)
{
	if (c == 1)
		return (std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl, 1);
	int i = 0, j = 0;
	while (v[++i] != NULL)
	{
		j = 0;
		while (v[i][j] != 0)
			std::cout << (char)toupper(v[i][j++]);
	}
	return (std::cout << std::endl, 0);
}
