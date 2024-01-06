#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    // use exit() to get out of infinite loop
    char ch = 'a';
    while (1)
    {
        switch (ch)
        {
        case 'a':
            cout << "a ";
            // break;
            exit(0);

        case 'b':
            cout << "b ";
            // break;

        default:
            cout << "This is default";
        }
        // exit(0);
    }
    return 0;
}