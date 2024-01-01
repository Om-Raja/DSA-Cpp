#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of row ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << row;
            column++;
        }
        cout << endl;
        row++;
    }
}