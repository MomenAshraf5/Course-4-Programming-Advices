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
    int counter = 1;
    for(int steps = 0; steps < userNumber; steps++)
    {
        for(int steps = 0; steps < counter; steps++)
        {
            int character = counter + 64;
            cout << (char)character;
        }
        cout << endl;
        counter++;
    }
}

int main()
{
    int UserNumber = ReadNumber("Enter a positive number");
    PrintInvertedPattern(UserNumber);

    return 0;
}