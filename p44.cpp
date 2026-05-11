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

string GetDay(int numberOfDay)
{
    switch (numberOfDay)
    {
    case 1:
        return "Sunday";
    case 2:
        return "Monday";
    case 3:
        return "Tuesday";
    case 4:
        return "Wednesday";
    case 5:
        return "Thursday";
    case 6:
        return "Friday";
    case 7:
        return "Saturday";
    default:
        return "Wrong Day";
    }
}

int main()
{
    int NumberOfDay = ReadNumber("Enter a number from 1 to 7 to display the name of day");
    string TheDay = GetDay(NumberOfDay);

    cout << "It is " + TheDay << endl;
    return 0;
}