#include <iostream>
using namespace std;

void PrintAToZ()
{
    int A = 65;
    int Z = 90;

    for(int firstCharacter = A; firstCharacter <= Z; firstCharacter++)
    {
        cout << char(firstCharacter) << endl;
    }
}

int main ()
{
    PrintAToZ();
    return 0;
}