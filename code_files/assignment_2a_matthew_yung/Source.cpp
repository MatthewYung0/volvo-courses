#include <iostream>
using namespace std;

int main()
{
	int user_input;
	cout << "Enter a number: ";
	cin >> user_input;
	cout << endl;

	for (int number = 0; number <= user_input; number++)
		cout << number << "\n" << endl;
}
