#include <iostream>
using namespace std;

float ReadNumber(string messages)
{
    float Number;

    do{
        cout << messages << endl;
        cin >> Number;
        if(Number <= 0)
            messages = "Please enter a number grater than zero";
    }while(Number <= 0);

    return Number;
}

float ConvertDaysIntoSecond(float days)
{
    return days * 24 * 60 * 60;
}
float ConvertHoursIntoSeconds(float hours)
{
    return hours * 60 * 60;
}
float ConvertMinutesIntoSeconds(float minutes)
{
    return minutes * 60;
}

int main()
{
    float Days = ReadNumber("How many days you took in the task ?");
    float Hours = ReadNumber("How many Hours you took in the task ?");
    float Minutes = ReadNumber("How many minutes you took in the task ?");
    float Seconds = ReadNumber("How many Seconds you took in the task ?");

    float TotalTimeOfTask = ConvertDaysIntoSecond(Days) + ConvertHoursIntoSeconds(Hours) + ConvertMinutesIntoSeconds(Minutes) + Seconds;

    cout << endl;
    cout << "The Total Time Of Task In Seconds Is " << TotalTimeOfTask << endl;

    return 0;
}