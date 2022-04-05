#include <iostream>

void adder(int &kalle, int &stina);


void adder(int &kalle, int &stina)
{
	kalle+=2;
	stina+=2;
}


int main() {
	int a=2; int b=2;
	adder(a,b);
	std::cout << a << " " << b; //will be 4 4
}
