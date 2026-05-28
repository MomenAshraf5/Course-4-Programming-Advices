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

int HowManyDigit(int userNumber, int digitNumber)
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

int main()
{
    int UserNumber = ReadNumber("Enter a positive number");
    int DigitNumber = ReadNumber("Enter a digit number to Know how many time exist in a big number");
    int DigitTimes = HowManyDigit(UserNumber, DigitNumber);

    cout << "Digit " << DigitNumber << " Frequency is " << DigitTimes << " Times" << endl;
    return 0;
}