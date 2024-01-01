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
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int num = n - i + 1;
        int j = i;
        while (num)
        {
            cout << j;
            j++;
            num--;
        }
        cout << endl;
        i++;
    }
    return 0;
}