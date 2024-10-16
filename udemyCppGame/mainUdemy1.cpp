#include <iostream>
#include <iomanip>

int main()
{
	std::cout << "Hello World!" << std::endl;

	std::string msg = "Hello Steve ";
	int age = 20;
	float tempreture = 22.6;
	float tempreture2 = 22.67891234567;
	double doubleSizeFloat = 22.67891234567;
	char characterA = 'A';
	bool lightIsOn = true;

	std::cout << msg << age << " The tempreture is: " << tempreture << std::endl;
	std::cout << std::setprecision(15) << tempreture2 << std::endl; // A float precision ígyis csak 7 szamjegyig supportál
	std::cout << std::setprecision(15) << doubleSizeFloat << std::endl; // A float precision ígyis csak 7 szamjegyig supportál

	// 1 byte is 8 bit
	std::cout << "The size of string: " << sizeof(std::string) << "bytes" << std::endl;
	std::cout << "The size of int: " << sizeof(int) << "bytes" << std::endl;
	std::cout << "The size of float: " << sizeof(float) << "bytes" << std::endl;
	std::cout << "The size of double: " << sizeof(double) << "bytes" << std::endl;
	std::cout << "The size of char: " << sizeof(char) << "bytes" << std::endl;
	std::cout << "The size of bool: " << sizeof(bool) << "bytes" << std::endl;


	// Arrays

	// string array
	// Csak ugyanolyan típusú lehet benne az adat
	// Itt a tömbök fix méretûek, nem lehet hozzáadni még egy plusz elemet a kód közben 
	std::string employees[] = { "Steve", "Bob", "Allen"};

	// Ha egy olyan indexet adunk meg ami nem létezik a rendes tömbben, akkor undefinedet kapunk és nem pedig errort vagy warningot
	std::cout << employees[3] << std::endl;

	employees[1] = "Adam";
	std::cout << employees[1] << std::endl;
}