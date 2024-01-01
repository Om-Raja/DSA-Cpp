#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int number = i;
        while (number)
        {
            cout << i;
            number--;
        }
        cout << endl;
        i++;
    }
    return 0;
}