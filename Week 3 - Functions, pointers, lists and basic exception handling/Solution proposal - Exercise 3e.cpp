#include <iostream>

int main()
{

	int input;
	std::cout << "Enter a number:";
	std::cin >> input;

	try
	{
		if (input < 0)
			throw -1;
		else if (input == 0)
			throw 0;
	}
	catch (int e)
	{
		std::cout << "Exception Nr. " << e << std::endl;
	}
}
