#include <iostream>
using namespace std;

int main()
{
	int * foo;
	int nbr_of;
	cout << "How many do you want?";
	cin >> nbr_of;
	foo = new int [nbr_of];

	for (int i = 0; i < nbr_of; i++)
		cout << foo[i] << endl;

	delete[] foo;
}