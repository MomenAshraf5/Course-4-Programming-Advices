#include <iostream>
using namespace std;

struct stNumbers {
    int Num1, Num2, Num3;
};

stNumbers ReadNumbers()
{
    stNumbers Numbers;
    cout << "Enter First Number..." << endl;
    cin >> Numbers.Num1;
    cout << "Enter Second Number..." << endl;
    cin >> Numbers.Num2;
    cout << "Enter Third Number..." << endl;
    cin >> Numbers.Num3;

    return Numbers;
}

int GetMaxNumber(stNumbers numbers)
{
    if(numbers.Num1 > numbers.Num2)
        if(numbers.Num1 > numbers.Num3)
            return numbers.Num1;
        else
            return numbers.Num3;
    else 
        if(numbers.Num2 > numbers.Num3)
            return numbers.Num2;
        else
            return numbers.Num3;
}

void PrintMaxNumber(stNumbers numbers)
{
    int MaxNumber = GetMaxNumber(numbers);
    string Result = "\nThe Max Number is " + to_string(MaxNumber);

    cout << Result;
}

int main()
{
    PrintMaxNumber(ReadNumbers());
    return 0;
}