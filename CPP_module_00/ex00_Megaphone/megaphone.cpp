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
