#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Enter First Number..." << endl;
    cin >> Num1;
    cout << "Enter Second Number..." << endl;
    cin >> Num2;
}

void SwapTwoNumbers(int& Num1, int& Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

void PrintNumbers(int Num1, int Num2)
{
    string Result = "\nThe First Number is " + to_string(Num1) + "\nThe Second Number is " + to_string(Num2);

    cout << Result;
}


int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    SwapTwoNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    return 0;
}