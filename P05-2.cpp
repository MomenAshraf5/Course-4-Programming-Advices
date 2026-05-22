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

void DisplayNumbersInReversed(int userNumber)
{
    const int count = to_string(userNumber).length();
    
    for (int counter = 0; counter < count; counter++)
    {
        cout << CheckReminderZero(userNumber) << endl;
        userNumber = userNumber / 10;
    }
}
int main()
{
    int UserNumber = ReadNumber("Enter a positive number");
    DisplayNumbersInReversed(UserNumber);
    
    return 0;
}