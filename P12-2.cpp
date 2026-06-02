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

void PrintInvertedPattern(int userNumber)
{
    int counter = 0;
    for(int steps = counter; counter < userNumber; steps++)
    {
        for(int steps = counter; steps < userNumber; steps++)
        {
            cout << userNumber;
        }
        cout << endl;
        userNumber--;
    }
}

int main()
{
    int UserNumber = ReadNumber("Enter a positive number");
    PrintInvertedPattern(UserNumber);

    return 0;
}