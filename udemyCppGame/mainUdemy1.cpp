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
	std::cout << std::setprecision(15) << tempreture2 << std::endl; // A float precision �gyis csak 7 szamjegyig support�l
	std::cout << std::setprecision(15) << doubleSizeFloat << std::endl; // A float precision �gyis csak 7 szamjegyig support�l

	// 1 byte is 8 bit
	std::cout << "The size of string: " << sizeof(std::string) << "bytes" << std::endl;
	std::cout << "The size of int: " << sizeof(int) << "bytes" << std::endl;
	std::cout << "The size of float: " << sizeof(float) << "bytes" << std::endl;
	std::cout << "The size of double: " << sizeof(double) << "bytes" << std::endl;
	std::cout << "The size of char: " << sizeof(char) << "bytes" << std::endl;
	std::cout << "The size of bool: " << sizeof(bool) << "bytes" << std::endl;


	// Arrays

	// string array
	// Csak ugyanolyan t�pus� lehet benne az adat
	// Itt a t�mb�k fix m�ret�ek, nem lehet hozz�adni m�g egy plusz elemet a k�d k�zben 
	std::string employees[] = { "Steve", "Bob", "Allen"};

	// Ha egy olyan indexet adunk meg ami nem l�tezik a rendes t�mbben, akkor undefinedet kapunk �s nem pedig errort vagy warningot
	std::cout << employees[3] << std::endl;

	employees[1] = "Adam";
	std::cout << employees[1] << std::endl;
}