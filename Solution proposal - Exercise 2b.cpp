#include <iostream>

int main()
{
	std::string old;
	int age;
	std::cout << "How old are you? ";
	std::cin >> old;
	age = std::stoi(old) + 10;
	std::cout << "In ten years you will be "<< age << " years old!";
	return 0;
}
