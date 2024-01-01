#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch = char(ch + 1);
        i++;
    }
    return 0;
}