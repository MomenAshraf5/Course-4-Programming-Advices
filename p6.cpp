#include <iostream>
using namespace std;

struct stFullName
{
    string FirstName;
    string MiddleName;
    string LastName;
};

stFullName ReadFullName()
{
    stFullName FullName;

    cout << "Enter your first name" << endl;
    cin >> FullName.FirstName;
    cout << "Enter your middle name" << endl;
    cin >> FullName.MiddleName;
    cout << "Enter your last name" << endl;
    cin >> FullName.LastName;

    return FullName;
}

void PrintFullName(stFullName FullName, bool Reversed)
{
    if(Reversed)
        cout << "Your name is " + FullName.FirstName + " " + FullName.LastName + " " + FullName.MiddleName;
    else
        cout << "Your name is " + FullName.FirstName + " " + FullName.MiddleName + " " + FullName.LastName;
}

int main() 
{   
    PrintFullName(ReadFullName(), true);
    return 0;
}