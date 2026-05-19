#include <iostream>
using namespace std;

void PrintTitleOfTable()
{
    cout << endl << "                       Multiplication Table From 1 to 10" << endl;
}
void PrintHeaderOfTable()
{
    cout << endl << "       1       2       3       4       5       6       7       8       9       10" << endl;
}
void PrintSeparateLine()
{
    cout << "----------------------------------------------------------------------------------" << endl;
}

void CalcMultiplication()
{
    int counter = 1;

    for(int firstNumber = 1; firstNumber <= 10; firstNumber++)
    {
        cout << firstNumber << "   |  ";
        for(int firstNumber = 1; firstNumber <= 10; firstNumber++)
        {
            int result = firstNumber * counter;
            cout << result << "       ";
        }
        cout << endl;
        counter++;
    }
}

int main()
{
    PrintTitleOfTable();
    PrintHeaderOfTable();
    PrintSeparateLine();
    CalcMultiplication();
    return 0;
}