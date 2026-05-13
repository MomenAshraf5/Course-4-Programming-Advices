#include <iostream>
using namespace std;

int ReadPinCode(string messages, int pinCode)
{
    int PINCode = 5151;
    int constant = 3;
    for(int i = 0; i < constant && PINCode != pinCode; i++)
    {
        cout << messages << endl;
        cin >> PINCode;
        messages = "Wrong PIN";
        if(PINCode <= 0)
            messages = "PIN is wrong should greater than zero";
    }

    return PINCode;
}

bool Login(int pinCode)
{
    do{
        if(pinCode == 1234)
            return 1;
        else
            return
    }while(pinCode != 1234);
}
int main()
{
    int PinCode = ReadPinCode("Enter Your PIN Code", 1234);
    return 0;
}