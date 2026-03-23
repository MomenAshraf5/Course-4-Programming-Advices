#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stVariableArea
{
    int Height;
    int Base;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Height of Triangle" << endl;
    cin >> VariableArea.Height;
    cout << "Enter The Base of Triangle" << endl;
    cin >> VariableArea.Base;

    return VariableArea;
}

float CalcAreaOfTriangle(stVariableArea VariableArea)
{

    float AreaOfTriangle = (VariableArea.Base * VariableArea.Height)/2;

    return AreaOfTriangle;
}

void PrintArea(stVariableArea VariableArea)
{
    float AreaOfTriangle = CalcAreaOfTriangle(VariableArea);
    string Result = "\nThe Area of Triangle is " + to_string(AreaOfTriangle);

    cout << Result;
}

int main()
{
    PrintArea(ReadVariableArea());
    return 0;
}