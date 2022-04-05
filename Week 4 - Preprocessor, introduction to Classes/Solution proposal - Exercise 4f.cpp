#include <iostream>
class Vehicle { //a Vehicle class
public:
	Vehicle() {std::cout << "Vehicle" << std::endl;};
};

class Car : public Vehicle{	//inherits from Vehicle
public:
	Car() {std::cout << "Car" << std::endl;};
};

class Volvo :  public Car {
public:
	Volvo() { std::cout << "Volvo" << std::endl;};
};

int main() {
	Volvo my_volvo;
}
