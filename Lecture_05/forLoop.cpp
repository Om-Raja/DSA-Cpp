#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (;;) // can be written this way but when you do this with condition, remember to break the loop
    {
        if (i <= 4)
            cout << i << endl;
        else
            break;
        i++;
    }
    cout << endl;

    // multiple initialisation, condition and updation is possible
    for (int a = 2, b = 3, c = 5; a >= 0 && b >= 0 && c >= 2; a++, b++, c--)
    {
        cout << a << " " << b << " " << c << endl;
    }

    cout << endl;
    
    int n;
    cout << "Enter n ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum is " << sum;
        return 0;
}