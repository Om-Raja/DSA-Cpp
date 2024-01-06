#include <iostream>
using namespace std;

bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter the number ";
    cin >> number;
    if (number <= 1)
    {
        cout << "1 or negative number cannot be prime number. \n";
    }
    else if (isPrime(number))
    {
        cout << number << " is Prime. \n";
    }
    else 
        cout << number << " is not Prime \n";
}