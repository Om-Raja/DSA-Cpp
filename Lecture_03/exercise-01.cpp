// checking prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int i = 2;
    if (n == 2)
    {
        cout << "2 is prime number \n";
    }
    else if (n == 1)
    {
        cout << "1 is not a prime number, it has only one factor. \n";
    }
    else
    {
        while (i < n)
        {
            int remainder = n % i;
            if (remainder == 0)
            {
                cout << n << " is not a prime number." << endl;
            }
            else
            {
                cout << n << " is a prime number. \n";
            }
            i++;
        }
    }
    // multiple print issue. Solve it later.
    return 0;
}