#include <iostream>
using namespace std;

int ReadGrade ()
{
    int Grade;

    do{
        cout << "Please enter your grade" << endl;
        cin >> Grade;
    }while(Grade < 0 || Grade > 100);

    return Grade;
}

void PrintMarkOfGrade(int grade)
{
    if(grade >= 90)
    {
        cout << "A";
    }else if (grade <= 89 && grade >= 80)
    {
        cout << "B";
    }else if (grade <= 79 && grade >= 70)
    {
        cout << "C";
    }else if (grade <= 69 && grade >= 60)
    {
        cout << "D";
    }else if (grade <= 59 && grade >= 50)
    {
        cout << "E";
    }else{
        cout << "F";
    }
} 

int main ()
{
    PrintMarkOfGrade(ReadGrade());
    return 0;
}