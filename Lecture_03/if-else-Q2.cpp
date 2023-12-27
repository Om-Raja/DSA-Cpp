#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = a + 1;
    
    if ((a = 3) == b)
    {
        cout << a;
    }
    else
    {
        cout << a + 5;
    }
    return 0;
}
