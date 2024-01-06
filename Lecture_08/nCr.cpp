#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    return numerator / denominator;
}
int main()
{
    int n, r;
    cout << "Enter n and r ";
    cin >> n >> r;
    cout << "nCr is " << nCr(n, r);
    return 0;
}