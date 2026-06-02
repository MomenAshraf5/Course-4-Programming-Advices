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
    const short FixedDivide = 10;
    int Number = 0;
    while (userNumber % 10 !=0)
    {
        short Reminder = userNumber % FixedDivide;
        userNumber /= 10;
        Number =  10 * Number + Reminder; 
    }
    return Number;
}

void PrintTheNumberInReversed(int usernumber)
{
    int ReverseNumber = CheckReminderZero(usernumber);
    while (ReverseNumber % 10 != 0)
    {
        const short FixedDivide = 10;
        short Reminder = ReverseNumber % FixedDivide;
        ReverseNumber /= 10;

        cout << Reminder << endl;
    }
}

int main()
{
    int UserNumber = ReadNumber("Enter a positive number");
    PrintTheNumberInReversed(UserNumber);

    return 0;
}