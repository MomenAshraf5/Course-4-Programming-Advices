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

float CalcHowmanyDays(float hours)
{
    return hours / 24;
}

float CalcHowManyWeeks(float days)
{
    return days / 7;
}


int main()
{
    float Hours = ReadNumber("Enter any number of Hours to calc in days and weeks");
    float Days = CalcHowmanyDays(Hours);
    float Weeks = CalcHowManyWeeks(Days);
    cout << endl;
    cout << "Your Days is " << Days << endl;
    cout << "Your Weeks is " << Weeks << endl;
    return 0;
}