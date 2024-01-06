#include <iostream>
using namespace std;
int numberOfSetBits(int a)
{
      int count = 0;
    while (a != 0)
    {
        if(a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}
int setBits(int p, int q)
{
    return(numberOfSetBits(p) + numberOfSetBits(q));
}
int main()
{
    int a, b;
    cout << "Ente a & b : ";
    cin >> a >> b;

    cout << "Total number of set bits = " << setBits(a, b);
}