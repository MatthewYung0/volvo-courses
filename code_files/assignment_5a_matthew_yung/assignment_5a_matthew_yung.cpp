#include <iostream>
#include <list>
#include <string>
#include <fstream>
using namespace std;

void add_friend();
void view_friends();
void print_menu();
fstream myfile;

class Friend
{
public:

    string first_name = "";
    string last_name = "";
    string phone_number = "";

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
    //Open FriendList to copy over files to Friend list array.
    ifstream myfile;
    myfile.open("FriendList.txt");
    string text = " ";

    //Read number of lines in text file;
    int lines = 0;
    while (getline(myfile, text)) {
        if (text != "") {
            ++lines;
            continue;
        }
    }

    //Return to top of text file
    myfile.clear();
    myfile.seekg(0);

    //Declaring dynamic array
    string* temp = new string[lines];

    //Add data to dynamic array
    for (int i = 0; getline(myfile, text); i++) {
        if (text != "") {
            temp[i] = text;
            i--;
        }
    }

    //Create Friend object from dynamic array
    for (int i = 0; i < lines; i+=3) {
        Friend copy_friend;
        copy_friend.first_name = temp[i];
        copy_friend.last_name = temp[i + 1];
        copy_friend.phone_number = temp[i + 2];
        list_of_friends.push_front(copy_friend);
    }

    delete[] temp;
    

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

    myfile.close();
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

    ofstream myfile ("FriendList.txt", ios::app);
    myfile << new_friend.first_name << endl << endl;
    myfile << new_friend.last_name << endl << endl;
    myfile << new_friend.phone_number << endl << endl;

}
