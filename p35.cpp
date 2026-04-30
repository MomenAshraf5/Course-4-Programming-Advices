#include <iostream>
using namespace std;

tuple<int,int,int,int> ReadMoneyOfUser()
{
    int Penny, Nickel, Dime, Quarter, Dollar;

    do{
        cout << "How much Penny you have ?" << endl;
        cin >> Penny;
        cout << endl << "How much Nickel you have ?" << endl;
        cin >> Nickel;
        cout << endl << "How much Dime you have ?" << endl;
        cin >> Dime;
        cout << endl << "How much Quarter you have ?" << endl;
        cin >> Quarter;
        cout << endl << "How much Dollar you have ?" << endl;
        cin >> Dollar;
    }while (Penny < 0 || Nickel < 0 || Dime < 0 || Quarter < 0 || Dollar < 0);

return {Penny, Nickel, Dime, Quarter, Dollar};
    
}

int main()
{
    return 0;
}