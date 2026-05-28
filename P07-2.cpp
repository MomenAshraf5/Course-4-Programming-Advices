#include <iostream>
using namespace std;

int ReadNumber(string messages)
{
    int Number;

    do{
        cout << messages << endl;
        cin >> Number;
        if(Number <= 0)
            messages = "Please enter a number greater than zero";
    }while(Number <= 0);

    return Number;
}

int CheckReminderZero(int userNumber)
{
    const int FixedDivide = 10;
    int Reminder = userNumber % FixedDivide;
    return Reminder;
}

void PrintTheNumberInReversed(int usernumber)
{
    while (usernumber % 10 != 0)
    {
        int LastNumber = CheckReminderZero(usernumber);
        cout << LastNumber;
        usernumber = usernumber / 10;
    }
}

int main()
{
    int UserNumber = ReadNumber("Enter a positive number");
    PrintTheNumberInReversed(UserNumber);
    return 0;
}