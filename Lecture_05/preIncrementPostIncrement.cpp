#include <iostream>
using namespace std;
int main()
{
    // a++ post increment --> pahle value use hogi baad me increase hogi.
    // a-- post decrement
    // ++a pre increment --> pahle value increase hogi baad me use hogi.
    // --a pre decrement

    int i = 15;
    cout << "i++ " << i++ << endl; // 15, i = 16
    cout << "i-- " << i-- << endl; // 16, i = 15
    cout << "++i " << ++i << endl; // 16, i = 16
    cout << "--i " << --i << endl; // 15, i = 15
 

    return 0;
}