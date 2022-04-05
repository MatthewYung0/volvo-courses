#include <iostream>

int main() {

	int number;

	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number % 2 == 0) 
	{
		std::cout << "Number is even!";
	} 
	else
	{
		std::cout << "Number is odd!";
	}
}