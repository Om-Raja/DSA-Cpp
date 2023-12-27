#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 6;
    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a < b) << endl;

    bool first = (a == b);
    bool second = (a != b);
    bool third = (a >= b);
    bool fourth = (a <= b);
    bool fifth = (a > b);
    bool sixth = (a < b);
    
    cout << "first is " << first << endl;
    cout << "second is " << second << endl;
    cout << "third is " << third << endl;
    cout << "fourth is " << fourth << endl;
    cout << "fifth is " << fifth << endl;
    cout << "sixth is " << sixth << endl;
    return 0;
}