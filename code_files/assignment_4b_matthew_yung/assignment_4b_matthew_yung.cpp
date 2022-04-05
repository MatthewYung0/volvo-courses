#include <iostream>
using namespace std;

class Human
{
public:
    string name = "";
    string born = "";

    void print_human_info()
    {
        cout << name + " " + born + " ";
    }
};

class Employer : public Human
{
public:
    string salary = " ";
    string title = " ";

    void print_info()
    {
        print_human_info();
        cout << salary + " " + title + " ";
    }
};

class Private_Insurance : public Human
{
public:
    string price = " ";
    string covers = " ";

    void print_info()
    {
        print_human_info();
        cout << price + " " + covers + " ";
    }
};

int main()
{
    Human hu;
    hu.name = "Matthew";
    hu.born = "1951";
    hu.print_human_info();
    cout << endl;

    Employer my;
    my.name = "Volvo";
    my.born = "1850";
    my.salary = "Not enough";
    my.title = "Red collar";
    my.print_info();
    cout << endl;

    Private_Insurance my_insurance;
    my_insurance.name = "Unionen";
    my_insurance.born = "1852";
    my_insurance.price = "too much";
    my_insurance.covers = "cutlery";
    my_insurance.print_info();
    cout << endl;

}