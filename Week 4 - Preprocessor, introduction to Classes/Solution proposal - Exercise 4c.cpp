#include <iostream>

//Here we write the forever preprocessor define
#define forever	while(1)

int main() {
	forever
	{
		std::cout << "loop 4 ever" << std::endl;
	}
}
