#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a = 0, b = 1, ans;
    for (int i = 3; i <= n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the term ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "The fibonacci is " << n;
    }
    else
    {
        cout << "The fibonacci is " << fibonacci(n);
    }
}