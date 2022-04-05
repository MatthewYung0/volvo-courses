#include <iostream>
using namespace std;

int factorial(int number);

int main()
{
	int number;
	cout << "Enter a number to get the factorial of: " << endl;
	cin >> number;

	cout << factorial(number);

	return 0;

}

int factorial(int number) {

	if (number >= 1 && number <= 10)
		return number * factorial(number - 1);
	else
		return 1;
}