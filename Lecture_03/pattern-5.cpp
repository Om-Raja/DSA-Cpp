#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Eneter n ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n * (i - 1) + j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}