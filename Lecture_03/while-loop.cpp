#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int sum = 0;
    while(i <= 10)
    {
        sum += i;
        i++;
    }
    cout << "Sum of 1 to 10 is " << sum ;
    return 0;
}