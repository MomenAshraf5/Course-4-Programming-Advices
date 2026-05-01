#include <iostream>
using namespace std;

int ReadPenny()
{
    int Penny;

    do{
        cout << "How much Penny you have ?" << endl;
        cin >> Penny;
    }while (Penny < 0 );

    return Penny;
}

int ReadNickel()
{
    int Nickel;

    do{
        cout << "How much Nickel you have ?" << endl;
        cin >> Nickel;
    }while (Nickel < 0 );

    return Nickel;
}

int ReadDime()
{
    int Dime;

    do{
        cout << "How much Dime you have ?" << endl;
        cin >> Dime;
    }while (Dime < 0 );

    return Dime;
}

int ReadQuarter()
{
    int Quarter;

    do{
        cout << "How much Quarter you have ?" << endl;
        cin >> Quarter;
    }while (Quarter < 0 );

    return Quarter;
}

int ReadDollar()
{
    int Dollar;

    do{
        cout << "How much Dollar you have ?" << endl;
        cin >> Dollar;
    }while (Dollar < 0 );

    return Dollar;
}

int CalcHowMuchMoneyHaveWithPenny()
{
    return ReadPenny() + ReadNickel() * 5 + ReadDime() * 10 + ReadQuarter() * 25 + ReadDollar() * 100;
}

float CalcHowMuchMoneyHaveWithDollar(float MoneyWithPenny)
{
    
    return MoneyWithPenny / 100;
}

int main()
{
    int MoneyWithPenny = CalcHowMuchMoneyHaveWithPenny();
    float MoneyWithDollar = CalcHowMuchMoneyHaveWithDollar(MoneyWithPenny);

    cout << "Your Money with Penny is " + to_string(MoneyWithPenny) << endl;
    cout << "Your money with Dollar is " + to_string(MoneyWithDollar) << endl;
    return 0;
}