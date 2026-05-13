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

float CalcNumberOfMonths(int numberOfLoan, int monthlyInstallment)
{
    return numberOfLoan / monthlyInstallment;
}


int main()
{
    int NumberOfLoan = ReadNumber("How much loan do you need ?", 500 , 1000000);
    int NumberOfMonths = CalcNumberOfMonths(NumberOfLoan, 500);

    cout << "Your Installment is need " << NumberOfMonths << " Months to Pay " << endl;
    return 0;
}