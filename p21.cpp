#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stVariableArea
{
    int circumference;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Circumference of Circle" << endl;
    cin >> VariableArea.circumference;

    return VariableArea;
}

float CalcAreaOfCircle(stVariableArea VariableArea)
{
    const float PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067;
    float AreaOfCircle =  pow(VariableArea.circumference, 2)/(4*PI);

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