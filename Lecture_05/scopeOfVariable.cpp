#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    cout << "a initially is " << a << endl;
    for (int i = 0; i <= 2; i++)
    {
        // a++;
        // cout << a << endl;
        a = 50;
    }

    cout << "a after for loop is " << a << endl;

    if (true)
    {
        a = 79;
        cout << "a in if " << a << endl;
    }
    cout << "a out of if " << a << endl;

    int b = 45;
    if (true)
    {
        int b = 20;
        cout << "b in if block is " << b << endl;
    }

    /* b doesn't change here because 'b' inside if block is another 
        variable with same name but not the same variable. */
        
    cout << "b outside if block is " << b << endl;

    
    /* if and loops can overwrite the value of a variable that is
        declared out of its scope. */

    // same name variable cannot be declared twice withing the same scope.
    
    /* same name variables can be declared in different scopes
        or nested scopes. */  
    return 0;
}