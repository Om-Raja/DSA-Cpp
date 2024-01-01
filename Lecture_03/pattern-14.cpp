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
        char ch = char('A' + i - 1);
        int j = 1;
        while (j <= n)
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