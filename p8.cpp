#include <iostream>
using namespace std;

enum enMark {Pass = 50, Fail = 49};

int ReadMark()
{
    int MarkNumber;
    cout << "Enter your Mark Number..." << endl;
    cin >> MarkNumber;

    return MarkNumber;
}

string CheckMark(int marknumber)
{

    if(marknumber >= enMark::Pass)
        return "Pass";
    else
        return "Fail";
}

void PrintMark(int marknumber)
{
    string checkmark = CheckMark(marknumber);
    string Result = "Your Mark is " + to_string(marknumber) + " You " + checkmark;
    cout << Result;
}

int main()
{

    PrintMark(ReadMark());
    return 0 ;
}