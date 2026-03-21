#include <iostream>

using namespace std;

struct stInfo 
{
    int Age;
    bool HasAdriverLicense;
    bool HasRecommendation;
};


stInfo ReadInfo()
{
    stInfo Info;
    cout << "what are your age ?" << endl;
    cin >>Info.Age;
    cout << "Have a driver license ?" << endl;
    cin >> Info.HasAdriverLicense;
    cout << "Do you a recommendation ?" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted() 
{
    stInfo Info = ReadInfo();

    if(Info.Age > 21 && Info.HasAdriverLicense || Info.HasRecommendation)
        return true;
    else
        return false;
}

void PrintResult() 
{
    bool IsHired = IsAccepted();

    if(IsHired)
        cout << "Hired";
    else
        cout << "Rejected";
}

int main()
{
    PrintResult();
    return 0;
}