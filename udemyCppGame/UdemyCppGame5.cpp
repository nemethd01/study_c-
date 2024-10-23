#include <iostream>

int main()
{
	// while
	int i = 0;
	while (i < 10)
	{
		std::cout << i << std::endl;
		i++;
	}

	do
	{
		std::cout << i << std::endl;

	} while (i < 10);
	// do while will do the code in the {} once first before checking the conditions.
}