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
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;  
        }
        int j2 = 1;
        int count = i - 1;
        while (j2 < i)
        {
            cout << count;
            count--;
            j2++;
        }
        int space_2 = n - i;
        while (space_2)
        {
            cout << " ";
            space_2--;
        }
        cout << endl;
        i++;
    }
    return 0;
}