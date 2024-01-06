#include <iostream>
using namespace std;
bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter number ";
    cin >> num;
    if(isEven(num))
    {
        cout << "The number is even.";
    }
    else 
    cout << "The number is odd.";
    return 0;
}