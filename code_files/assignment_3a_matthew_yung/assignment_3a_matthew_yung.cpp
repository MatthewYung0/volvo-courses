#include <iostream>
#include <list>
#include <string>
using namespace std;

void add_friend();
void view_friends();
void print_menu();

list<string> list_of_friends;

int main()
{
    int input = 0;
    print_menu();
    do
    {
        cin >> input;
        print_menu();
        

        switch (input)
        {
        case 1:
            add_friend();
            break;
        case 2:
            view_friends();
            break;
        }
        cout << endl;
    } while (input != 3);

    return 0;

}

void add_friend()
{
    string friend_name;
    cout << endl << "Add name of friend: " << endl;
    getline(cin, friend_name);

    list_of_friends.push_front(friend_name);
}

void view_friends()
{
    cout << endl;
    for (string friend_name : list_of_friends)
    {
        cout << friend_name << endl;
    }
}

void print_menu()
{
    cout << "1. Add" << endl;
    cout << "2. View" << endl;
    cout << "3. Exit" << endl << endl;
}
