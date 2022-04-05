#include <iostream>
#include <list>
#include <string>
using namespace std;

void add_friend();
void remove_friend(string &my_friend);
void view_friends();
void print_menu();


list<string> list_of_friends;

int main()
{
    int input = 0;
    string name;

    do
    {
        print_menu();
        cin >> input;

        switch (input)
        {
        case 1:
            add_friend();
            break;
        case 2:
            view_friends();
            break;
        case 3:
            remove_friend(name);
            list_of_friends.remove(name);
            break;
        }
        cout << endl;
    } while (input != 4);

    return 0;
}

void print_menu()
{
    cout << "1. Add" << endl;
    cout << "2. View" << endl;
    cout << "3. Remove" << endl;
    cout << "4. Exit" << endl << endl;
}

void view_friends()
{
    cout << endl;
    for (string friend_name : list_of_friends)
    {
        cout << friend_name << endl;
    }
}

void add_friend()
{
    string friend_name;
    cout << endl << "Add name of friend: " << endl;
    cin.ignore();
    getline(cin, friend_name);

    list_of_friends.push_front(friend_name);

}

void remove_friend(string &my_friend) {
    cout << endl << "Enter name of friend to remove " << endl;
    cin.ignore();
    getline(cin, my_friend);
}
