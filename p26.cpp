#include <iostream>
using namespace std;


int ReadNumber()
{
    int Number;

    cout << "Please Enter a number" << endl;
    cin >> Number;

    return Number;
}

void CheckNumber(int number)
{
    do{
        cout << number << endl;
        number--;
    }while(number >= 1);
}

void PrintNumbers()
{
    CheckNumber(ReadNumber());
}

int main () 
{
    PrintNumbers();
    return 0;
}