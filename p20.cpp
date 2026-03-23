#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stVariableArea
{
    int Side;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Side of Square" << endl;
    cin >> VariableArea.Side;

    return VariableArea;
}

float CalcAreaOfInscribedSquare(stVariableArea VariableArea)
{
    const float PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067;
    float AreaOfInscribedSquare = PI * pow(VariableArea.Side/2, 2);

    return AreaOfInscribedSquare;
}

void PrintArea(stVariableArea VariableArea)
{
    float AreaOfInscribedSquare = CalcAreaOfInscribedSquare(VariableArea);
    string Result = "\nThe Area of Inscribed Square is " + to_string(AreaOfInscribedSquare);

    cout << Result;
}

int main()
{
    PrintArea(ReadVariableArea());
    return 0;
}