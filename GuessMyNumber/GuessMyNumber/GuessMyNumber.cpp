#include <iostream>

int main() {
	srand(time(NULL));

	int guess = 0;
	int number = rand() % 10 + 1;

	//std::cout << randomNumber;
	std::cout << "Guess a number between 1 and 100: \n";


	do {
		std::cin >> guess;

		if (guess > number) {
			std::cout << "Too high! \n";
		}
		else if (guess < number) {
			std::cout << "Too low! \n";
		}

		std::cout << "Try again! \n";
		//else
		//{
		//	exit(0);
		//}

	} while (number != guess);

	std::cout << "Yes! My number was " << number << ". :) \n";

	return 0;
}