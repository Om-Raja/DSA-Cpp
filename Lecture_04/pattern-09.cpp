#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

//     int row = 1;
//     while (row <= n)
//     {
//         int col = 0;
//         while (col < row)
//         {
//             cout << row + col;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;


// another way :

    int row = 1;
    
    while (row <= n)
    {
        int value = row;
        int column = 1;
        while (column <= row)
        {
            cout << value;
            value++;
            column++;
        }
        cout << endl;
        row++;
    }

}

