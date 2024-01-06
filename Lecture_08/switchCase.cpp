// notes required
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount ";
    cin >> amount;

    // Rs100, Rs50, Rs20, Rs1 ruppes notes are available

    int note100, note50, note20, leftAmount;
    switch(1)
    {
        case 1: note100 = amount / 100;
        leftAmount = amount % 100;
        cout <<"Number of Rs100 notes required = " << note100 << endl; // ctrl + alt + 4 = ₹
        
        case 2 : note50 = leftAmount / 50;
        leftAmount = leftAmount % 50;
        cout << "Number of Rs50 notes required = " << note50 << endl;

        case 3: note20 = leftAmount / 20;
        leftAmount = leftAmount % 20;
        cout << "Number of Rs20 notes required = " << note20 << endl;

        case 4:
        cout << "Number of Rs1 notes required = " << leftAmount << endl;
        break;


        default : cout << "Invalid entry \n" ;

    }
    return 0;
}