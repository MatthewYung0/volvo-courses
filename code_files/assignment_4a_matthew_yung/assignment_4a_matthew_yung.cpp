#include <iostream>
#include <list>
#include <string>
using namespace std;

void add_friend();
void view_friends();
void print_menu();

class Friend 
{
private:
    string first_name = "";
    string last_name = "";
    string phone_number = "";
public:
    void print_info()
    {
        string friend_details = first_name + " " + last_name + " " + phone_number;
        cout << friend_details;
    }
    void add_friend() {
        cout << "Add the first name of your friend: " << endl;
        cin >> first_name;
        cout << endl << "Add the last name of your friend: " << endl;
        cin >> last_name;
        cout << endl << "Add the phone number of your friend: " << endl;
        cin >> phone_number;
    }
};

list<Friend> list_of_friends;

int main()
{
    int input = 0;
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
        }
        cout << endl;
    } while (input != 3);
    return 0;
}

void print_menu()
{
    cout << "1. Add" << endl;
    cout << "2. View" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
}

void view_friends()
{
    cout << endl;
    for (Friend friend_name : list_of_friends)
    {
        friend_name.print_info();
        cout << endl;
    }
}

void add_friend()
{
    cout << endl;
    Friend new_friend;
    new_friend.add_friend();
    list_of_friends.push_front(new_friend);
}
