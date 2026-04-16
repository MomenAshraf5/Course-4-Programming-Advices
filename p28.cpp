#include <iostream>
using namespace std;

enum enNumberType {Odd = 1, Even = 0};

int ReadNumber()
{
    int Number;

    cout << "Please enter a number" << endl;
    cin >> Number;

    return Number;
}

enNumberType CheckNumberType(int number)
{
    int EvenOrOdd = number % 2;

    if(EvenOrOdd == enNumberType::Even)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

int SumOddNumber(int number)
{
    int Sum;
    if(CheckNumberType(number))
    {
        for (int counter = number; counter > 0; counter -= 2)

            Sum += counter;
            cout << Sum << endl;
    }else

        for (int counter = number - 1; counter > 0; counter -= 2)

            Sum += counter;

    return Sum;
}

void PrintSumOdd()
{
    int result = SumOddNumber(ReadNumber());
    cout << result << endl;
}

int main()
{
    PrintSumOdd();
    return 0;
}