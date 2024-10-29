#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <random>

int main()
{
	// give a sequence of numbers, find a smallest one.
	std::vector<int> randomNumbers;

	std::srand(std::time(nullptr));

	for (int i = 1; i < 12; ++i)
	{
		int number = std::rand() % 100; // ranodm szám generálása max 100-ig
		randomNumbers.push_back(number);
		std::cout << number << " ";
	}

	//int smallest = randomNumbers[0];
	int smallest = std::numeric_limits<int>::min();
}