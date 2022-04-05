#include <iostream>

int main()
{
	int age = 50;

	if (age > 43) {
		std::cout << "My age is higher";
	} 
	else if(age < 43) 
	{
		std::cout << "My age is lower";
	}
	else
	{
		std::cout << "You found my age";
	}

}