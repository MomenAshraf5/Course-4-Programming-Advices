#include <iostream>
using namespace std;

string ReadName() 
{
    string MyName;
    cout << "Enter your name..." << endl;
    getline(cin, MyName);

    return MyName;
}

void PrintName() 
{
    cout << "Your name is " + ReadName();
    
}



int main () 
{
    PrintName();

    return 0;
}