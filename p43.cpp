#include <iostream>
using namespace std;

struct strTime 
{
    int TimeInDays, TimeInHours, TimeInMinutes, TimeInSeconds;
};

int ReadNumber(string messages)
{
    int Number;

    do{
        cout << messages << endl;
        cin >> Number;
        if(Number <= 0)
            messages = "Please enter a number grater than zero";
    }while(Number <= 0);

    return Number;
}

int ConvertSecondsIntoDays(float seconds)
{
    return seconds / 60 / 60 / 24;
}
int ConvertSecondsIntoHours(float seconds ,int days)
{

    return (seconds - days * 60 * 60 * 24) / 60 / 60;
}
int ConvertSecondsIntoMinutes(float seconds, int days, int hours)
{
    return (seconds - days * 60 * 60 *24 - hours * 60 * 60) / 60;
}
int GetRemainderSeconds(float seconds, int days, int hours, int minutes)
{
    return (seconds - days * 60 * 60 * 24 - hours * 60 * 60 - minutes * 60);
}


int main()
{
    float Seconds = ReadNumber("How many Seconds you took ?");
    int Days = ConvertSecondsIntoDays(Seconds);
    int Hours = ConvertSecondsIntoHours(Seconds, Days);
    int Minutes = ConvertSecondsIntoMinutes(Seconds, Days, Hours);
    int RemainderSeconds = GetRemainderSeconds(Seconds, Days, Hours, Minutes);

    cout << endl;
    cout << "The Time is " << Days << ":" << Hours << ":" << Minutes << ":" << RemainderSeconds << endl;

    return 0;
}