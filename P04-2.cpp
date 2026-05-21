#include <iostream>
using namespace std;

enum enPerfect {Perfect = 1, NotPerfect = 0};

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

enPerfect CheckTheNumberIsPerfect(int userNumber)
{
    
    int Sum = SumNumbersFromReminder(userNumber);
    if(userNumber == Sum)
    {
        return enPerfect::Perfect;
    }else{
        return enPerfect::NotPerfect;
    }
}

void CheckNumbersFrom1ToUserNumber()
{
    int UserNumber = ReadNumber("Enter A number To check is Perfect or not");
    for (int Counter = 1; Counter < UserNumber; Counter++)
    {
        if(enPerfect::Perfect == CheckTheNumberIsPerfect(Counter))
        {
            cout << "That Number " << to_string(Counter) << " is Perfect" << endl;
        }
    }
    
}

int main()
{
    CheckNumbersFrom1ToUserNumber();
    return 0;
}