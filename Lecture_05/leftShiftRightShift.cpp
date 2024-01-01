#include <iostream>
using namespace std;
int main()
{
    // << left shift --> number become double in one left shift
    // >> right shift --> number become half in one right shift
    // for small numbers only
    // paddling (i.e., empty bit filled by) is 0 --> for +ve numbers
    // paddling for negative numbers depend upon compiler.

    cout << "(15 << 1)" << (15 << 1) << endl; // expected 30
    cout << "(15 >> 1)" << (15 >> 1) << endl; // expected 7
    cout << "(15 << 2)" << (15 << 2) << endl; // expected 60
    cout << "(15 >> 2)" << (15 >> 2) << endl; // expected 3

    return 0;
}