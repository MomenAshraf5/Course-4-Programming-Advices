#include <iostream>
#include <cmath>
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

int CheckReminderZero(int userNumber,int counterNumber)
{
    int Reminder = userNumber % counterNumber;
    if(Reminder == 0)
    {
        return counterNumber;
    }
    return 0;
}

int SumNumbersFromReminder(int userNumber)
{
    int Sum = 0;
    for (int CounterNumber = 1; CounterNumber < userNumber; CounterNumber++)
    {
        int result = CheckReminderZero(userNumber, CounterNumber);
        Sum += result;
    }
    return Sum;
}

void CheckTheNumberIsPerfect()
{
    int UserNumber = ReadNumber("Enter A number To check is Perfect or not");
    int Sum = SumNumbersFromReminder(UserNumber);
    if(UserNumber == Sum)
    {
        cout << "Your Number " + to_string(UserNumber) + " is Perfect";
    }else{
        cout << "Your Number " + to_string(UserNumber) + " is Not Perfect";
    }
}

int main()
{
    CheckTheNumberIsPerfect();
    return 0;
}