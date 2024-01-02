#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want to check ";
    cin >> n;

    bool prime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << n << " is not prime number." << endl;
            prime = false; // lowercase flase used in c++
            break;
        }
    }

    if (n <= 1)
    {
        cout << "1 and negative numbers cannot be prime number" << endl;
    }
    else if (prime)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
    return 0;
}