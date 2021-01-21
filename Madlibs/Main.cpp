
#include <iostream>

int main()
{
	std::cout << "Give me an adjective: ";
	std::string adjective1;
	std::cin >> adjective1;

	std::cout << "Give me an nationality: ";
	std::string nationality1;
	std::cin >> nationality1;

	std::cout << "Give me a famous person:  ";
	std::string famPerson1;
	std::cin >> famPerson1;

	std::cout << "Give me a noun: ";
	std::string noun1;
	std::cin >> noun1;

	std::cout << "Give me another adjective: ";
	std::string adjective2;
	std::cin >> adjective2;

	std::cout << "Give me another noun: ";
	std::string noun2;
	std::cin >> noun2;

	std::cout << "Give me yet another adjective: ";
	std::string adjective3;
	std::cin >> adjective3;

	std::cout << "Give me another nationality: ";
	std::string nationality2;
	std::cin >> nationality2;

	std::cout << "Give me a plural noun: ";
	std::string pluralNoun;
	std::cin >> pluralNoun;

	std::cout << "Give me yet another noun: ";
	std::string noun3;
	std::cin >> noun3;

	std::cout << "Give me a number: ";
	std::string number1;
	std::cin >> number1;

	std::cout << "Give me shapes: ";
	std::string shapes1;
	std::cin >> shapes1;
	
	std::cout << "Give me a food: ";
	std::string food1;
	std::cin >> food1;

	std::cout << "Give me your favorite food: ";
	std::string favfood1;
	std::cin >> favfood1;

	std::cout << "Give me another number: ";
	std::string number2;
	std::cin >> number2;


	std::cout << "Pizza was invented by " << adjective1 << " " << nationality1 << "\n";
	std::cout << "chef named " << famPerson1 << ". To make a pizza, you need\n";
	std::cout << "to take a lump of " << noun1 << ", and make thin, round\n";
	std::cout << adjective2 << " " << noun2 << ". Then you cover it with\n";
	std::cout << adjective3 << " sauce, " << nationality2 << " cheese, and fresh\n";
	std::cout << "chopped " << pluralNoun << ". Next you have to bake it in a very\n";
	std::cout << "hot " << noun3 << ". When it is done, cut into " << number1 << "\n";
	std::cout << shapes1 << ". Some kids like " << food1 << " pizza the\n";
	std::cout << "best, but my favorite is the " << favfood1 << " pizza. If I could, I\n";
	std::cout << "would eat pizza " << number2 << " times a day!";
}