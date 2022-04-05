#include <iostream>

int main()
{
	int number=-1;
	do
	{
		number+=2;
		std::cout << "Odd number:" << number << std::endl;
	} while (number<99);
}
