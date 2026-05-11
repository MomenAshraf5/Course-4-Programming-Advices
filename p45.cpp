#include <iostream>
using namespace std;

enum enNameOfMonth {January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12};

int ReadNumber(string messages ,int from ,int to)
{
    int Number;

    do{
        cout << messages << endl;
        cin >> Number;
        if(Number < from || Number > to)
            messages = "Please enter a number Between " + to_string(from) + " to " + to_string(to);
    }while(Number < from || Number > to);

    return Number;
}

string GetMonth(int numberOfDay)
{
    switch (numberOfDay)
    {
    case enNameOfMonth::January:
        return "January";
    case enNameOfMonth::February:
        return "February";
    case enNameOfMonth::March:
        return "March";
    case enNameOfMonth::April:
        return "April";
    case enNameOfMonth::May:
        return "May";
    case enNameOfMonth::June:
        return "June";
    case enNameOfMonth::July:
        return "July";
    case enNameOfMonth::August:
        return "August";
    case enNameOfMonth::September:
        return "September";
    case enNameOfMonth::October:
        return "October";
    case enNameOfMonth::November:
        return "November";
    case enNameOfMonth::December:
        return "December";
    default:
        return "Wrong Month";
    }
}

int main()
{
    int NumberOfDay = ReadNumber("Enter a number from 1 to 12 to display the name of Month", 1 , 12);
    string TheNameOfMonth = GetMonth(NumberOfDay);

    cout << "It is " + TheNameOfMonth << endl;
    return 0;
}