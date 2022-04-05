#include <iostream>
#include <fstream>

int main () {
	std::ifstream myfile;			//uses ifstream (read only)
	std::string my_string;
	myfile.open ("example.txt");	//open stream
	std::cout << "Content of file is:";
	std::getline(myfile,my_string);
	std::cout << my_string;
	myfile.close();					//close stream
}
