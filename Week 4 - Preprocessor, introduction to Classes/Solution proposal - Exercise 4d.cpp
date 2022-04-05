#include <iostream>

using namespace std;
int main()
{
#ifdef __linux__ 
//linux code goes here
	cout << "LINUX";
#elif _WIN32
// windows code goes here
	cout << "WINDOWS";
#else
// something else, maybe check for MAC also ?
	cout << "UNKNOWN";
#endif

	return 0;
}
