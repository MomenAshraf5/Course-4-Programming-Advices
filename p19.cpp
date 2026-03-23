#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stVariableArea
{
    int Diameter;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Diameter of Circle" << endl;
    cin >> VariableArea.Diameter;

    return VariableArea;
}

float CalcAreaOfDiameter(stVariableArea VariableArea)
{
    const float PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067;
    float AreaOfDiameter = (PI * pow(VariableArea.Diameter, 2))/4;

    return AreaOfDiameter;
}

void PrintArea(stVariableArea VariableArea)
{
    float AreaOfDiameter = CalcAreaOfDiameter(VariableArea);
    string Result = "\nThe Area of Diameter is " + to_string(AreaOfDiameter);

    cout << Result;
}

int main()
{
    PrintArea(ReadVariableArea());
    return 0;
}