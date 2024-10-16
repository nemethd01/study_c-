#include <iostream>
#include <vector>
#include <map>

int main()
{	// array can hold elements of any type
	// array do not change size
	int IDs[] = { 1234, 1334, 1434 };


	// vectors

	// {...} is called initializer list
	std::vector<int> IDVect = {1234, 1334, 1434};

	std::cout << "The first one of IDs: " << IDs[0] << std::endl;
	std::cout << "The first one of IDVect: " << IDVect[0] << std::endl;

	// a végén ki kell vonni egyet, mert ha tömbben csak egy elem van, az a nulladik indexen lesz, viszont az IDs size akkor is 1 lesz
	std::cout << "The last one of IDs: " << IDs[sizeof(IDs) / sizeof(int) -1] << std::endl;
	std::cout << "The last one of IDVect: " << IDVect.back() << std::endl;

	std::cout << "The size of IDs: " << sizeof(IDs) / sizeof(int) << std::endl;
	std::cout << "The size of IDVect: " << IDVect.size() << std::endl;



	// Vector can grow and shrink
	// grow
	IDVect.push_back(1534);
	std::cout << "The last one of IDVect: " << IDVect.back() << std::endl;
	std::cout << "The first one of IDVect: " << IDVect.front() << std::endl;
	std::cout << "The first one of IDVect: " << IDVect.front() << std::endl;
	
	// insert
	IDVect.insert(IDVect.begin(), 1134);
	std::cout << "The first one of IDVect: " << IDVect.front() << std::endl;
	
	// insert to secont
	IDVect.insert(IDVect.begin() +1, 1134);
	std::cout << "The second one of IDVect: " << IDVect[1] << std::endl;

	// remove
	IDVect.erase(IDVect.begin());
	std::cout << "The first one of IDVect: " << IDVect.front() << std::endl;



	// map
	std::map<std::string, int> IDsMap = { {"Steve", 1234}, {"Adam", 1334}, {"Ada", 1444}};
	// use the key instead of index to find a value
	std::cout << IDsMap["Ada"] << std::endl;

	// change the value
	IDsMap["Adam"] = 1544;
	std::cout << IDsMap["Adam"] << std::endl;
	// insert
	IDsMap.insert({"Leon", 1644});
	std::cout << IDsMap["Leon"] << std::endl;
	// remove
	IDsMap.erase("Leon"); // this erase erases the Leon key value from the map
	std::cout << IDsMap["Leon"] << std::endl; // this one checks if Leon exists, if not, it adds a Leon basically doing IDsMap.insert({"Leon", 0});.
}