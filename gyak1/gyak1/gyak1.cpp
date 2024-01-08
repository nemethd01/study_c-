#include <iostream>

int main() {
	std::cout << "Hello world! \n";
	std::cout << "szevasz nyul";

	int labmeret = 42;
	std::cout << labmeret << "\n";

	int myAge = 22;
	std::cout << "I am " << myAge << " years old. \n";

	//int x = 5;
	//int y = 6;
	//int sum = x + y;
	//std::cout << sum << "\n";

	int x, y, z;
	x = y = z = 50;
	std::cout << x + y + z << "\n\n";

	int a = 1;
	int b = 2;

	int c = a;
	a = b;
	b = c;
	//a = b;
	//std::cout << a << "<-- ez az a";

	int q = 10;
	int w = 3;
	int e = q + w;

	std::cout << e << '\n';

	//int x = 10;
	//int y = x++; // x = 11, y = 10;
	//int z = ++x; // x = 11, z = 11;

	return 0;
}