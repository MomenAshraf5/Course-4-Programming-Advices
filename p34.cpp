#include <iostream>
using namespace std;

enum enNumberRange {Million = 1000000000, HalfMillion = 500000, OneHundredThousand = 100000, FiftyThousand = 50000};

int ReadTotalSales(int From)
{
    int TotalSales;

    do{
        cout << "Enter a Total Sales Number From " + to_string(From) << endl;
        cin >> TotalSales;
    }while(TotalSales < 0);

    return TotalSales;
}

int CalCommission(int number)
{
    int YourCommission;

    if(number > enNumberRange::Million)
    {
        YourCommission = number * 0.01;
    }else if (number >= enNumberRange::HalfMillion)
    {
        YourCommission = number * 0.02;
    }else if (number >= enNumberRange::OneHundredThousand)
    {
        YourCommission = number * 0.03;
    }else if (number >= enNumberRange::FiftyThousand)
    {
        YourCommission = number * 0.05;
    }else{
        YourCommission = number * 0;
    }



    return YourCommission;
}

int main() 
{
    int result = CalCommission(ReadTotalSales(50000));
    cout << "Your Commission is " + to_string(result) << endl;
    return 0;
}