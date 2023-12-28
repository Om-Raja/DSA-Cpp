// farenhite = {celsius*(9/5)} + 32
#include <iostream>
using namespace std;
int main()
{
   float F,C;
    cout << "Enter temperature in degree celsius " << endl;
    cin >> C;
    // F = (C*(9/5)) + 32 => gives wrong ans. because 9/5 = 1 here (int)
    F = (C*9/5) + 32;
    cout << "Degree Farenhite = " << F;
    return 0;
}