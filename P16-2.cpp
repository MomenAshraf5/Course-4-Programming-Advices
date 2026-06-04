#include <iostream>
using namespace std;


void PrintInvertedPattern()
{
    for(int i = 1; i <= 26; i++)
    {
        for(int j = 1; j <= 26; j++)
        {
            for (int t = 1; t <= 26; t++)
            {
                int characterOne = i + 64;
                int characterTwo = j + 64;
                int characterThree = t + 64;
                cout << char(characterOne) << char(characterTwo) << char(characterThree) << endl;
            }
        }
    }
}

int main()
{
    PrintInvertedPattern();

    return 0;
}