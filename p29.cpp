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

int SumEvenNumber(int number)
{
    int Sum = 0;
    bool OddOrEven = CheckNumberType(number);

    if(OddOrEven)
    {
        for (int counter = number - 1; counter > 0; counter -= 2)

            Sum += counter;
    }else

        for (int counter = number; counter > 0; counter -= 2)

            Sum += counter;

    return Sum;
}

void PrintSumEven()
{
    int result = SumEvenNumber(ReadNumber());
    cout << endl << "The sum even number is " << result << endl;
}

int main()
{
    PrintSumEven();
    return 0;
}