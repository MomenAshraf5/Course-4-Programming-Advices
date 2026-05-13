#include <iostream>
using namespace std;

int ReadNumber(string messages ,int minLoanAmount ,int maxLoanAmount)
{
    int Number;

    do{
        cout << messages << endl;
        cin >> Number;
        if(Number < minLoanAmount || Number > maxLoanAmount)
            messages = "Please enter a number Between " + to_string(minLoanAmount) + " to " + to_string(maxLoanAmount);
    }while(Number < minLoanAmount || Number > maxLoanAmount);

    return Number;
}

float CalcMonthlyInstallment(int numberOfLoan, int numberOfMonth)
{
    return numberOfLoan / numberOfMonth;
}


int main()
{
    int NumberOfLoan = ReadNumber("How much loan do you need ?", 500 , 1000000);
    int monthlyInstallment = CalcMonthlyInstallment(NumberOfLoan, 10);

    cout << "Your Monthly Installment is " << monthlyInstallment << endl;
    return 0;
}