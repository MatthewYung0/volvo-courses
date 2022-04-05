#include <iostream>

class Phone
{
public:
	Phone();
	std::string name="";
	std::string color="green";
};

Phone::Phone()
{
	name = "Samsung";
}

int main()
{
	Phone my_phone;
	std::cout << "The " << my_phone.name << " is " << my_phone.color;
}
