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
        int num = n - i + 1;
        int j = 1;
        while (num)
        {
            cout << j;
            j++;
            num--;
        }
        
        int star = i - 1;
        while (star)
        {
            cout << "*";
            star--;
        }

         int star2 = i - 1;
        while (star2)
        {
            cout << "*";
            star2--;
        }

        int num2 = n - i + 1;
        int j2 = num2;
        while (num2)
        {
            cout << j2;
            j2--;
            num2--;
        }
        cout << endl;
        i++;
    }
    return 0;
}