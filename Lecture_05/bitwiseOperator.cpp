// &, |, ~, ^
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 7;

    cout << "a&b " << (a&b) << endl; // and
    cout << "a|b " << (a|b) << endl; // or
    cout << "a^b " << (a^b) << endl; // exor
    cout << "~a " << (~a) << endl; // not
    return 0;
}