#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stVariableArea
{
    int Base;
    int LeftSide;
    int RightSide;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Base of Triangle" << endl;
    cin >> VariableArea.Base;
    cout << "Enter The Left Side of Triangle" << endl;
    cin >> VariableArea.LeftSide;
    cout << "Enter The Right Side of Triangle" << endl;
    cin >> VariableArea.RightSide;

    return VariableArea;
}

float CalcAreaOfCircle(stVariableArea VariableArea)
{
    const float PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067;
    float p = (VariableArea.Base + VariableArea.LeftSide + VariableArea.RightSide)/2;
    float AreaOfCircle =  PI * pow((VariableArea.Base*VariableArea.LeftSide*VariableArea.RightSide)/(4*sqrt(p*(p-VariableArea.LeftSide)*(p-VariableArea.Base)*(p-VariableArea.RightSide))), 2);

    return AreaOfCircle;
}

void PrintArea(stVariableArea VariableArea)
{
    float AreaOfCircle = CalcAreaOfCircle(VariableArea);
    string Result = "\nThe Area of Circle is " + to_string(AreaOfCircle);

    cout << Result;
}

int main()
{
    PrintArea(ReadVariableArea());
    return 0;
}