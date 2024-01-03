#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the binary number to convert into decimal ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int rem = n % 10;
        ans += rem * pow(2, i);
        
        n = n / 10;
        i++;
    }
    cout << "ans is " << ans;
    return 0;
}