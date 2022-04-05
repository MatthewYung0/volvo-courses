#include <iostream>

class Phone
{
public:
	std::string name="";
	std::string color="green";
};

int main()
{
	Phone my_phone;
	my_phone.name="Nokia";
	std::cout << "The " << my_phone.name << " is " << my_phone.color;
}
