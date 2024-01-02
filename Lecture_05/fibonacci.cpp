#include <iostream>
using namespace std;
int main()
{
    // fibonacci = 0 1 1 2 3 5 8 13 21 34 55....<-- sum of previous two numbers
    // n = (n - 1) + (n - 2)

    int n;
    cout << "Enter n ";
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;

    }

        return 0;
}