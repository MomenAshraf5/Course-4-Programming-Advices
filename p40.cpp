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

float CalcServicesFee(float billValue)
{
    return billValue * 0.1;
}

float CalcBillWithServicesFee(float billValue, float servicesFee)
{
    return billValue + servicesFee;
}

float CalcSalesTax(float billWithServicesFee)
{
    return billWithServicesFee * 0.16;
}

int main()
{
    float BillValue = ReadNumber("Enter Your Bill Value");
    float ServicesFee = CalcServicesFee(BillValue);
    float BillWithServicesFee = CalcBillWithServicesFee(BillValue, ServicesFee);
    float SalesTax = CalcSalesTax(BillWithServicesFee);
    float TotalCash = ServicesFee + SalesTax + BillValue;

    cout << endl;
    cout << "Your Services Fee is " << ServicesFee << endl;
    cout << "Your Sales Tax is " << SalesTax << endl;
    cout << "______________________________________" << endl;
    cout << "The Total Cash is " << TotalCash;
    return 0;
}