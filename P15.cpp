#include <iostream>
using namespace std;

struct stVariableArea
{
    int Length;
    int width;
};

stVariableArea ReadVariableArea()
{
    stVariableArea VariableArea;
    cout << "Enter The Length of Rectangle" << endl;
    cin >> VariableArea.Length;
    cout << "Enter The Width of Rectangle" << endl;
    cin >> VariableArea.width;

    return VariableArea;
}

int CalcAreaOfRectangle(stVariableArea VariableArea)
{
    int AreaOfRectangle = VariableArea.Length * VariableArea.width;

    return AreaOfRectangle;
}

void PrintArea(stVariableArea VariableArea)
{
    int AreaOfRectangle = CalcAreaOfRectangle(VariableArea);
    string Result = "\nThe Area of Rectangle is " + to_string(AreaOfRectangle);

    cout << Result;
}

int main()
{
    PrintArea(ReadVariableArea());
    return 0;
}