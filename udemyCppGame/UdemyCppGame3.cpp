#include <iostream>
#include <string>
#include <limits>

int main()
{
	// Arthmetic operators
	// +, -, *, /, %

	int a = 10;

	a++;
	int h = a--; // Ha az a++ után csináljuk közvetlenül, akkor az eredmény: 11
	int i = --a; // Ha az a++ után csináljuk közvetlenül, akkor az eredmény: 10;

	std::cout << h << std::endl;

	// Comparison operators
	// ==, &&, !=, !, <, >, <=, >=

	// Logical operators
	// &&, ||


	// Inputs

	int age;

	std::cout << "Please type your age: " << std::endl;
	std::cin >> age;
	std::cin.clear(); // to clear the error tell the buffer that everything is ok
	// std::cin.ignore(10000, '\n'); // ignore the next 10000 amount of characters or until hit a new line
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string name;
	std::cout << "What is your name?" << std::endl;

	// std::cin >> name;
	// getline only works on strings, cin works all data types
	std::getline(std::cin, name);

	std::cout << "Your age is: " << age << " And your name is: " << name << std::endl;

}