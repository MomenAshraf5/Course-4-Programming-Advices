#include <iostream>
#include <cmath>
using namespace std;

pair <int,int> ReadNumberAndPower()
{
    int Number;
    int Power;

    cout << "Please enter a regular number" << endl;
    cin >> Number;
    cout << endl << "Please enter a power number" << endl;
    cin >> Power;

    return {Number, Power};
}

void CalNumberofPower(int number, int power)
{
    int NumberofPower = pow(number, power);

    cout << endl << NumberofPower << endl;
}

int main() 
{
    auto [number, power] = ReadNumberAndPower();
    CalNumberofPower(number, power);
    return 0;
}