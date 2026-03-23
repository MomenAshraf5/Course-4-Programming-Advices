#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stVariableArea
{
    int Length;
    int diagonal;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Length of Rectangle" << endl;
    cin >> VariableArea.Length;
    cout << "Enter The Diagonal of Rectangle" << endl;
    cin >> VariableArea.diagonal;

    return VariableArea;
}

float CalcAreaOfRectangle(stVariableArea VariableArea)
{

    float AreaOfRectangle = VariableArea.Length * sqrt(pow(VariableArea.diagonal, 2) - pow(VariableArea.Length, 2));

    return AreaOfRectangle;
}

void PrintArea(stVariableArea VariableArea)
{
    float AreaOfRectangle = CalcAreaOfRectangle(VariableArea);
    string Result = "\nThe Area of Rectangle is " + to_string(AreaOfRectangle);

    cout << Result;
}

int main()
{
    PrintArea(ReadVariableArea());
    return 0;
}