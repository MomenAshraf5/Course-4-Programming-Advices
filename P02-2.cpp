#include <iostream>
#include <cmath>
using namespace std;

enum enPrime {Prime = 1, NotPrime = 0};

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


enPrime CheckPrimeNumber(int number)
{
    int Counter = 2;
    int M = round(number/2);
    
    if(number <= Counter)
    {
        return enPrime::Prime;
    }
    for(int i = Counter; i <= M; i++)
    {
        if(number % Counter == 0)
        {
            return enPrime::NotPrime;
        }
        Counter +=1;
    }
    return enPrime::Prime;
}

void SendAllNumberFromUserInput(int Number)
{
    int FirstNumber = 0;
    for(int i = 1; i <= Number; i++)
    {
        FirstNumber++;
        if(CheckPrimeNumber(FirstNumber))
        {
            cout << FirstNumber << endl;
        }
    }
}


int main()
{
    int UserNum = ReadNumber("Enter a Number to Print All Prime Numbers");
    SendAllNumberFromUserInput(UserNum);
    
    return 0;
}