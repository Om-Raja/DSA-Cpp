#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

    int rows = 1;
    while (rows <= n)
    {
        int value = rows;
        int column = 1;
        while (column <= rows)
        {
            cout << value;
            value--;
            column++;
        }
        cout << endl;
        rows++;
    }
    return 0;
}