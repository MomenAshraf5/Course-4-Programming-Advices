#include <iostream>
using namespace std;

struct stNumbers {
    int Num1, Num2, Num3;
};

stNumbers ReadNumbers()
{
    stNumbers Numbers;
    cout << "Enter First Number..." << endl;
    cin >> Numbers.Num1;
    cout << "Enter Second Number..." << endl;
    cin >> Numbers.Num2;
    cout << "Enter Third Number..." << endl;
    cin >> Numbers.Num3;

    return Numbers;
}

int CalcSumOfNumbers(stNumbers numbers)
{
    int Sum = numbers.Num1 + numbers.Num2 + numbers.Num3;

    return Sum;
}

float CalcAverageNumbers(int sum)
{
    float AverageNumbers = sum / 3;

    return AverageNumbers;
}

void PrintSumOfNumbers(stNumbers numbers)
{
    int Sum = CalcSumOfNumbers(numbers);
    float AverageNumbers = CalcAverageNumbers(Sum);

    string SumResult = "\nThe Sum Of Number " + to_string(numbers.Num1) + ", " + to_string(numbers.Num2) + ", " + to_string(numbers.Num3) + " is " + to_string(Sum) + "\n";

    string AvgResult = "\nThe Average Of Number " + to_string(numbers.Num1) + ", " + to_string(numbers.Num2) + ", " + to_string(numbers.Num3) + " is " + to_string(AverageNumbers) + "\n";

    

    cout << AvgResult;

}

int main()
{
    PrintSumOfNumbers(ReadNumbers());
    return 0;
}