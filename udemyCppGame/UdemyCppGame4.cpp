#include <iostream>
#include <vector>

int main()
{
	// for loop

	// get sum of the numbers from 1 to 100

	// std::cout << (1 + 100) * 100 / 2 << std::endl;

	// int sum = 0;
	// for (int i = 0; i <= 100; i++)
	// {
	// 	sum += i;
	//}

	//std::cout << sum << std::endl;

	// for loop with arrays
	// int ids[6] = {1,2,3,4,5}; // lehet ilyet is, ez így egy hat elembõl álló tömb (1,2,3,4,5,0)
	int ids[] = {1,2,3,4,5};

	// off by one problem van ha itt i < sizeof(ids)/sizeof(int)
	//for (int i = 0; i < sizeof(ids)/sizeof(int); i++)
	//{
		//std::cout << ids[i] << std::endl;
	//}

	// másik módszer:
	for (int i = sizeof(ids)/sizeof(int)-1; i >= 0; i--)
	{
		std::cout << ids[i] << std::endl;
	}


	// foreach
	// ennek a hátránya az hogy itt nincs index
	for (int item : ids)
	{
		std::cout << item << std::endl;
	}


	std::vector<int> idsVec = {1,2,3,4,5};
	for (int item: idsVec)
	{
		std::cout << item << std::endl;
	}

	// iterator for loop
	// ez sokkal ritkábban használt, de komplexebb
	// iterator nem mûködik a sima array-el
	for (std::vector<int>::iterator itr = idsVec.begin(); itr != idsVec.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}
}