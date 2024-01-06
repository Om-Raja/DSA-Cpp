#include <iostream>
using namespace std;

int AP(int n)
{
    return (3 * n + 7);
}

int main ()
{
    int n;
    cout << "Enter n ";
    cin >> n;
    cout << n << "th term is " << AP(n);
}