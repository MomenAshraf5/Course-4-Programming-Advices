#include <iostream>
using namespace std;
#include <cmath>



int main()
{
    int Number;

    do{
        cout << "Please enter a positive number " << endl;
        cin >> Number;
    }while(Number < 0);

    cout << "The number power one is " + to_string(pow(Number, 1)) << endl;
    cout << "The number power two is " + to_string(pow(Number, 2)) << endl;
    cout << "The number power three is " + to_string(pow(Number, 3)) << endl;
    

    return 0;
}