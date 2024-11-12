#include <iostream>
#include <vector>


// templates

template<typename T>

void printMsg(T msg, bool newLine) {
	std::cout << msg;

	if (newLine) {
		std::cout << std::endl;
	}
}


template<typename V>
void printVector(const std::vector<V>& vectorToPrint)
{
	for (V element : vectorToPrint)
	{
		std::cout << element << " ";
	}
}




template<typename ArgOne, typename ArgTwo>
ArgOne summary(ArgOne argOne, ArgTwo argTwo)
{
	return argOne + argTwo;
}



// így lehet több elõre nem meghatározott elemet hozzá tenni

template<typename S> // ez az utolsó elemhez kell, mert ott nem lesz elõ és második elem
S summaryOfOthers(S s)
{
	return s;
}
template<typename ArgOne, typename... Others>
ArgOne summaryOfOthers(ArgOne argOne, Others... others)
{
	return argOne + summaryOfOthers(others...);
}


int main()
{
	printMsg<std::string>("Hello", true);
	printMsg<int>(1, true);
	//printMsg<char>("a", true);
	printMsg<float>(1.5, true);

	printVector<std::string>(std::vector<std::string>{"Adam", "Steve", "stb"});


	std::cout << summary<float, int>(1.5, 2) << std::endl;
	std::cout << summaryOfOthers(1.5, 2, 3, 4, 63, 34, 2.5) << std::endl;
	std::cout << summaryOfOthers(std::string{"Adam"}, std::string{"Steve"}) << std::endl;
}