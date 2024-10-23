#include <iostream>

int main()
{
	// check a given number from the user, tell if it is odd or even
	std::cout << "Please give me a whole number: \n >>>";
	int number = 0;
	std::cin >> number;

	while (!std::cin.good())
	{
		std::cout << "Please give me a whole number: \n >>>";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cin >> number;
	}
	// a % b = The reminder of the division
	// number % 2 = The reminder is either 0 or 1
	if (number % 2 == 0)
	{
		std::cout << "The number " << number << " is an even number." << std::endl;
	}
	else {
		std::cout << "The number " << number << " is an odd number." << std::endl;
	}
}