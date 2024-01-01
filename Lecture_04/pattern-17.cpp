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
        char ch = char(64 + i);
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch = char(ch + 1);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}