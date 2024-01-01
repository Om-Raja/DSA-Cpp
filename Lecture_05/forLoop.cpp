#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for ( ; ; ) // can be written this way but when you do this with condition, remember to break the loop
    {   
        if (i <= 4 )
        cout << i << endl;
        else
        break;
        i++;
    }
    return 0;
}