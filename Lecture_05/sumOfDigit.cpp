#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int product = 1;
    int num;
    cout << "Enter the number ";
    cin >> num;

    while (num > 0)
    {
          sum += num % 10;
        product *= num % 10;

        num = num / 10;
    }
    cout << "sum of digits of is " << sum << endl;
    cout << "product of digits of is " << product << endl;
    return 0;
}