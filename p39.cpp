#include <iostream>
using namespace std;

float ReadNumber(string messages)
{
    float Number;

    do{
        cout << messages << endl;
        cin >> Number;
        if(Number <= 0)
            messages = "Please enter a number grater than zero";
    }while(Number <= 0);

    return Number;
}

float CalcRemainderPay(float totalBill, float cashPaid)
{
    float PaidBack = cashPaid - totalBill;

    return PaidBack;
}

int main()
{
    float TotalPaid = ReadNumber("Enter Your Total Paid");
    float CashBill = ReadNumber("Enter Your Cash Bill");

    float RemainderPay = CalcRemainderPay(TotalPaid, CashBill);

    cout << "Your Remainder Pay Is " << RemainderPay << endl;
    return 0;
}