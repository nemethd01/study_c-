#include <iostream>

int main()
{

	// switch case
	// itt sem stringet sem enumot nem lehet használni
	// van a sima, és van ez, amiben össze lehet õket láncolni:
	int age = 6;

	switch (age)
	{
	case 6: case 12: case 15:
		std::cout << "go to next level" << std::endl;
		break;
	default:
		std::cout << "stay at your school" << std::endl;
		break;
	}


	// enum
	// enum are basically named integers
	enum Mood
	{
		Happy, // defaults of 0
		Angry, // defaults to previous one +1
		Sad // ...
	};

	// Creating a variable if the type Mood, and give it a value of Happy
	Mood mood = Happy;

	switch (mood)
	{
	case Happy:
		std::cout << "Happy" << std::endl;
		break;
	case Angry:
		std::cout << "Angry" << std::endl;
		break;
	case Sad:
		std::cout << "Sad" << std::endl;
		break;
	default:
		std::cout << "No mood" << std::endl;
		break;
	}




	enum class Valami
	{
		Happy = -1, // defaults of 0
		Angry = -2, // defaults to previous one +1
		Sad = 100 // ...
	};

	// Creating a variable if the type Mood, and give it a value of Happy
	Valami test = Valami::Happy;

	int testInInt = (int)test;

	Valami testFromInt = (Valami)-1;

	switch (testFromInt)
	{
	case Valami::Happy:
		std::cout << "Happy" << std::endl;
		break;
	case Valami::Angry:
		std::cout << "Angry" << std::endl;
		break;
	case Valami::Sad:
		std::cout << "Sad" << std::endl;
		break;
	default:
		std::cout << "No mood" << std::endl;
		break;
	}



	// convert miles to kilometers
	const float CONVERSION = 1.609344;

	std::cout << "Please type in the distance in Miles: \n >>>";

	float miles = 0; // always give a default value
	std::cin >> miles;

	while (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "Please give a number! \n >>>";
		std::cin >> miles;
	}

	std::cout << "The distance in kilometers is: " << miles * CONVERSION << std::endl;
}