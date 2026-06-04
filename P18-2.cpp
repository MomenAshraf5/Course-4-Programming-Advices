#include <iostream>
using namespace std;

string InputString(string messages)
{
    string InputString;

    cout << messages << endl;
    cin >> InputString;

    return InputString;
}

string EncryptionName(string userName)
{
    string word = "";
    for (int i = 0; i < userName.length(); i++)
    {
        int Encryption = userName[i] + 2;
        word = word + char(Encryption);
    }
    return word;
}

string DecryptionName(string encryptionName)
{
    string word = "";
    for (int i = 0; i < encryptionName.length(); i++)
    {
        int Decryption = encryptionName[i] - 2;
        word = word + char(Decryption);
    }
    return word;
}

int main(){
    string UserName = InputString("Enter your name");

    cout << DecryptionName(EncryptionName(UserName));
    return 0;
}