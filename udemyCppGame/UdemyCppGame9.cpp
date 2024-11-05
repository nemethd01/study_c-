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
	/* int smallest = std::numeric_limits<int>::max();
	for (int num : randomNumbers)
	{
		if (num < smallest)
		{
			smallest = num;
		}
	}

	std::cout << "The smallest number is: " << smallest << std::endl; */


	std::cout << "--------------------------- \n";
	// sorting - from smallest to biggest
	// bubble sort - SLOW (itt ezt használjuk)
	// quick sort - fastest
	// merge sort
	// insertion sort
	// binary heap sort
	for (int i = 0; i < randomNumbers.size(); ++i)
	{
		for (int j = i + 1; j < randomNumbers.size(); ++j)
		{
			if (randomNumbers[i] > randomNumbers[j])
			{
				std::swap(randomNumbers[i], randomNumbers[j]);
			}
		}
	}

	for (int num : randomNumbers)
	{
		std::cout << num << " ";
	}
}