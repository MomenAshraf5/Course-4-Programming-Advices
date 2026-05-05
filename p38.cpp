#include <iostream>
#include <cmath>
using namespace std;

enum enPrime {Prime = 1, NotPrime = 2};

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

void CheckTypeOfNumber()
{
    int Number = ReadNumber("Enter a Number to check if Prime or not");
    enPrime Type = CheckPrimeNumber(Number);

    switch(Type) {
        case enPrime::Prime:
            cout << "Your Number Is Prime";
            break;
        case enPrime::NotPrime:
            cout << "Your Number Is NotPrime";
            break;
        default:
            break;
    }
}

int main()
{
    CheckTypeOfNumber();
    return 0;
}