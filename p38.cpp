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
        if(Number < 0)
            messages = "Please enter a number grater than zero";
    }while(Number < 0);

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
    for(int i = Counter; number > i; i++)
    {
        if(number % Counter == 0)
        {
            return enPrime::NotPrime;
        }else if(Counter == M){
            return enPrime::Prime;
        }

        Counter +=1;
    }
}

string CheckTypeOfNumber()
{
    int Number = ReadNumber("Enter a Number to check if Prime or not");
    enPrime x = CheckPrimeNumber(Number);
    switch(x) {
        case enPrime::Prime:
            return "Prime";
        case enPrime::NotPrime:
            return "Not Prime";
        default:
            break;
    }
}

int main()
{
    cout << "Result" << CheckTypeOfNumber() << endl;   
    return 0;
}