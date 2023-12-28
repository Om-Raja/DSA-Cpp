// sum of even numbers in 1 to N using while loop
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter value of N ";
    cin >> N;
    
    int i = 2;
    int sum = 0;
    while(i <= N)
    {
        sum += i;
        i += 2;
    }
    cout << "sum is " << sum;
    return 0;
}