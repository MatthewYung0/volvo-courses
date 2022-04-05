#include <iostream>

using namespace std;

class Human {
private:
	string name="";
public:
	void print_name() {
		cout << "Name:" << name << endl;
	};
	void set_name(std::string new_name) {
		name = new_name;
	}
};

int main()
{
	Human hu;
	hu.set_name("Olle Ek");
	hu.print_name();
}
