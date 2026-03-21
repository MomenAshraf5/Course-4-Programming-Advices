#include <iostream>
using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
    int Number;
   cout << "Enter a Number" << endl;
   cin >> Number;
   return Number;
}

enNumberType CheckNumberType()
{
    int Number = ReadNumber();
    int result = Number % 2;

    if (result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType()
{
    enNumberType Number = CheckNumberType();

    if(Number == enNumberType::Even)
        cout << "The Number is Even";
    else
        cout << "The Number is Odd";
}

int main() 
{
    PrintNumberType();
    return 0;
}