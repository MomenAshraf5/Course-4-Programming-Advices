#include <iostream>
using namespace std;

int ReadNumer()
{
    int Number;

    cout << endl << "Please Enter a number" << endl;
    cin >> Number;

    return Number;
}

int FactorialNumber(int number)
{
    int Sum = 1;

    for(int counter = number; counter > 0; counter--)

        Sum = Sum * counter;

    return Sum;
}


void PrintFactorialNumber()
{
    cout << endl << "The Factorial of Number is " << FactorialNumber(ReadNumer()) << endl;
}
int main()
{
    PrintFactorialNumber();
    return 0;
}