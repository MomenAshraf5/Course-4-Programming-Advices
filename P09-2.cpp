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

short CheckReminderZero(int userNumber)
{
    const short FixedDivide = 10;
    short Reminder = userNumber % FixedDivide;
    return Reminder;
}

// short GetDigitNumber(int userNumber)
// {
//     string Number = to_string(userNumber);
//     int count = 0;
//     count++;
//     int test = to_integer();
//     cout << test << endl;
//     return test;
// }

int HowManyDigit(int userNumber, short digitNumber)
{
    int counter = 0;
    while (userNumber % 10 != 0)
    {
       if(digitNumber == CheckReminderZero(userNumber))
        counter += 1;
       userNumber = userNumber / 10; 
    }
    return counter;
}

void DisplayHowManyDigitInNumber(int userName)
{

    for(int i =0; i < 10; i++)
    {
        // char DigitNumber = GetDigitNumber(userName);
        // cout << DigitNumber << endl;
        int DigitTimes = HowManyDigit(userName, i);

        if(DigitTimes > 0)
            cout << "Digit " << i << " Frequency is " << DigitTimes << " Times" << endl;
    }
}

int main()
{
    int UserNumber = ReadNumber("Enter a positive number");
    DisplayHowManyDigitInNumber(UserNumber);

    return 0;
}