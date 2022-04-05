#include <iostream>
using namespace std;

int main()
{
	int user_input;
	cout << "Enter a number: ";
	cin >> user_input;
	cout << endl;

	int number = 0;

	//First loop with incrementing values
	while (number <= user_input) {
		cout << number << "\n" << endl;
		number++;
	}

	cout << endl;
	number = user_input;

	//Second loop with decrementing values
	do
	{
		cout << number << "\n" << endl;
		number--;

	} while (number >= 0);
}
