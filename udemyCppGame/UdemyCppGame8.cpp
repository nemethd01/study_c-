#include <iostream>
#include <sstream>
#include <map>

int main()
{
	// give a text, find a repeated word
	// A multiline szöveget nem érzékeli jól a C++ így a raw text-re R"""()""" -t kell használni
	std::string text = R"""(English texts for beginners to
		practice reading and comprehension online 
		and for free. Practicing your comprehension of w
		ritten English will both improve your vocabulary and
		understanding of grammar and word order. The texts below are 
		designed to help you develop while giving you an instant evaluation of your progress.")""";

	//std::cout << text << std::endl;
	std::stringstream ss;
	ss << text;

	std::string nextStr = "";
	std::map<std::string, int> wordCountMap;

	while (ss >> nextStr)
	{
		int lastPullIndex = 0;
		std::string word = "";
		for (char c : nextStr)
		{
			++lastPullIndex;
			if (std::isalpha(c)) // ha a karakter egy betû
			{
				word.push_back(std::tolower(c)); // olyan mint a vector.push_back
			}
			else
			{
				break;
			}
		}

		if (lastPullIndex != nextStr.size()-1)
		{
			std::string leftover = nextStr.substr(lastPullIndex);
			ss << ' ' << leftover; // itt a <<-vel lehet chainelni ami a php-ben . vagy js-ben +
		}

		std::cout << word << std::endl;

		if (wordCountMap.find(word) == wordCountMap.end())
		{
			wordCountMap.insert({ word, 1 });
		}
		else
		{
			wordCountMap[word] += 1;
		}
	}

}