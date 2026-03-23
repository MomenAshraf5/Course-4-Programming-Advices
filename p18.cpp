#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stVariableArea
{
    int Radius;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Radius of Circle" << endl;
    cin >> VariableArea.Radius;

    return VariableArea;
}

float CalcAreaOfRadius(stVariableArea VariableArea)
{
    const float PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067;
    float AreaOfRadius = PI * pow(VariableArea.Radius, 2);

    return AreaOfRadius;
}

void PrintArea(stVariableArea VariableArea)
{
    float AreaOfRadius = CalcAreaOfRadius(VariableArea);
    string Result = "\nThe Area of Radius is " + to_string(AreaOfRadius);

    cout << Result;
}

int main()
{
    PrintArea(ReadVariableArea());
    return 0;
}