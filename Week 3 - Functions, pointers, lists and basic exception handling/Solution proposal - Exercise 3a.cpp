#include <iostream>

/* function prototype */
void print(std::string text);


/* print function*/
void print(std::string text)
{
	std::cout << text;
}

/* main function */
int main()
{
	print("Hello world!");
	return 0;
}

