#include <iostream>
using namespace std;

float ReadNumber() 
{
    float Number;
    cout << "Enter Your Number..." << endl;
    cin >> Number;

    return Number;
}

float CalcHalfNumber(float Number)
{
    float HalfNumber = Number / 2;

    return HalfNumber;
}

void PrintHalfNumber(float Number)
{
    float HalfNumber = CalcHalfNumber(Number);
    string Result = "The Half of Number " + to_string(Number) + " is " + to_string(HalfNumber);

    cout << endl << Result << endl;
}

int main ()
{
    PrintHalfNumber(ReadNumber());
    return 0;
}