#include <iostream>
#include <fstream>

int main () {
	std::string in_string;
	std::ofstream myfile;			//uses ofstream (write only)
	std::cout << "Enter a string:";
	std::cin >> in_string;
	myfile.open ("example.txt");	//open stream
	myfile << in_string;			//write to stream
	myfile.close();					//close stream
}
