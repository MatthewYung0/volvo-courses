#include <iostream>
#include <list>

std::list<std::string> list_of_friends;

int main()
{
	list_of_friends.push_back("volvo");
	list_of_friends.push_back("Tesla");
	list_of_friends.push_back("Audi");
	list_of_friends.push_back("BMW");

	for (auto n : list_of_friends)
	{		//uses auto this time
		std::cout << n << " ";
	}

	std::cout << std::endl;

	list_of_friends.sort();
	for (auto n : list_of_friends)
	{		//uses auto this time
		std::cout << n << " ";
	}
}
