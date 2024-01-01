#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows ";
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int num = i;
        while (num)
        {
            cout << count;
            count++;
            num--;
        }
        cout << endl;
        i++;
    }
    return 0;
}