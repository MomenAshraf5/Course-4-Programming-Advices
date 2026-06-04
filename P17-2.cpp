#include <iostream>
using namespace std;

string GuessPassword(string messages)
{
    string GuessPassword;
    do{
        cout << messages << endl;
        cin >> GuessPassword;
        if(GuessPassword.length() >= 4)
            messages = "Please enter a Three Capital Letter";
    }while(GuessPassword.length() >= 4);

    return GuessPassword;
}

bool CheckPassword(string userPassword)
{
    string word = "";
    int counter = 1;
    
    for(int i = 1; i <= 26; i++)
    {
        for(int j = 1; j <= 26; j++)
        {
            for (int t = 1; t <= 26; t++)
            {
                int characterOne = i + 64;
                int characterTwo = j + 64;
                int characterThree = t + 64;
                
                word = word + char(characterOne);
                word = word + char(characterTwo);
                word = word + char(characterThree);
                cout << "Trial [" + to_string(counter) + "] : " + word << endl;
               while(word == userPassword){
                    cout << "Password is " + word << endl;
                    cout << "Found after " + to_string(counter) + " Trial(s)";
                    return true;
                }
                word = "";
                counter++;
            }
        }
    }
    return false;
}

int main()
{
    string UserPassword = GuessPassword("Enter a three capital letter to see if you can guess the password");
    CheckPassword(UserPassword);

    return 0;
}