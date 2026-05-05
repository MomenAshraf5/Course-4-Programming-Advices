#include <iostream>
using namespace std;

enum enOperator {Sum = 1, Subtract = 2, Multiply = 3, Divide = 4};

int ReadFirstNumber()
{
    int FirstNumber;

    cout << "Enter Your First Number" << endl;
    cin >> FirstNumber; 

    return FirstNumber;
}

int ReadSecondNumber()
{
    int SecondNumber;

    cout << "Enter Your Second Number" << endl;
    cin >> SecondNumber;

    return SecondNumber;
}


int ChooseOperator()
{
    int Operator;

    do{
        cout << "Choose one operator as Number" << endl;
        cout << "1) Sum" << endl;
        cout << "2) Subtract" << endl;
        cout << "3) Multiply" << endl;
        cout << "4) Divide" << endl;
        cin >> Operator;
    }while (Operator != enOperator::Sum && Operator != enOperator::Subtract && Operator != enOperator::Multiply && Operator != enOperator::Divide);


    return Operator;
}


int CalcNumbersWithOperator(int firstnumber, int secondnumber, int Operator)
{
    if(Operator == enOperator::Sum)
     {
        return firstnumber + secondnumber;
     }else if(Operator == enOperator::Subtract)
     {
        return firstnumber - secondnumber;
     }else if(Operator == enOperator::Multiply)
     {
        return firstnumber * secondnumber;
     }else 
     {
        return firstnumber / secondnumber;
     }
}

int main()
{

    int FirstNumber = ReadFirstNumber();
    int SecondNumber = ReadSecondNumber();
    int Operator = ChooseOperator();
    int CalculationOfNumbers = CalcNumbersWithOperator(FirstNumber, SecondNumber, Operator);

    cout << "The Result Of your number is " << CalculationOfNumbers << endl;
    return 0;
}