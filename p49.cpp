#include <iostream>
using namespace std;

int ReadNumber(string messages)
{
    int Number;

    do{
        cout << messages << endl;
        cin >> Number;
        if(Number <= 0)
            messages = "PIN is wrong should greater than zero";
    }while(Number <= 0);

    return Number;
}

string CheckPinNumber(int pinNumber)
{
    switch (pinNumber)
    {
    case 1234:
        return "Your Balance is 7500";
    default:
        return "Wrong PIN";
    }
}

int main()
{
    int PinNumber = ReadNumber("Enter Your PIN Number ");
    string Result = CheckPinNumber(PinNumber);

    cout << Result << endl;
    return 0;
}