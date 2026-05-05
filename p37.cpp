#include <iostream>
using namespace std;

int ReadNumbers()
{
    int Number = 0;
    int Sum = 0;
    
    do{
        cout << "Guess The Number that can stop the loop" << endl;
        cin >> Number;
        if(Number == -99)
        {
            break;
        }
        Sum = Sum + Number;
        
    }while(Number != -99);

    return Sum;
}


int main()
{
    cout << "The result is " << ReadNumbers() << endl;
    return 0;
}