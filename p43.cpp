#include <iostream>
using namespace std;

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

int ConvertSecondsIntoDays(int seconds)
{
    return seconds / 60 / 60 / 24;
}
int ConvertSecondsIntoHours(int seconds)
{
    return seconds / 60 / 60;
}
int ConvertSecondsIntoMinutes(int seconds)
{
    return seconds / 60;
}

int main()
{
    int Seconds = ReadNumber("How many Seconds you took ?");
    int Days = ConvertSecondsIntoDays(Seconds);
    int Hours = ConvertSecondsIntoHours(Seconds);
    int Minutes = ConvertSecondsIntoMinutes(Seconds);

    cout << endl;
    cout << "The Time is " << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;

    return 0;
}