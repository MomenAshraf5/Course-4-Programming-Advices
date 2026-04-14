#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number" << endl;
    cin >> Number;

    return Number;
}

void LoopOnNumberToReachOne(int number)
{
    int Counter = number;
    int FixedNumber = 0;

    cout << endl << "The Numbers From high to low " << endl;

    for(int i = Counter; i > FixedNumber; i--)
    {
        cout << i << endl;
    }
}

void PrintRangeOfNumbersFromHighToLow()
{
    LoopOnNumberToReachOne(ReadNumber());
}

int main()
{
    PrintRangeOfNumbersFromHighToLow();
    return 0;
}