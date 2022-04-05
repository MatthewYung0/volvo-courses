#include <iostream>

using namespace std;

int main() {
	char hello_world[]="Volvo has the best cars in the World";
	char *world=hello_world+31; //the address of world is the the same as 31 steps in hello_world

	cout << hello_world << endl;
	cout << world << endl;
}
