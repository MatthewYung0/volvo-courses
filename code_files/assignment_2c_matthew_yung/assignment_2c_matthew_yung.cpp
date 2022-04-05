#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    string character;
    string newsentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
  
    for (int i = 0; i < (int)sentence.length(); i++)
    {
        sentence[i] = tolower(sentence[i]);
    }

    for (int j = 0; j < sentence.length(); j++)
    {
        character = sentence[j];
        if((character.find("a") != string::npos) || (character.find("e") != string::npos) ||
            (character.find("i") != string::npos) || (character.find("o") != string::npos) ||
            (character.find("u") != string::npos) || (character.find("y") != string::npos) ||
            (character.find("å") != string::npos) || (character.find("ä") != string::npos) ||
            (character.find("ö") != string::npos) || (character.find("i") != string::npos) ||
            (character.find(" ") != string::npos))
        {
            newsentence.append(character);
        } 
        else 
        {
            string character_plus_o = character + "o" + character;
            newsentence.append(character_plus_o);
        }
    }
    cout << newsentence;
    return 0;
}
