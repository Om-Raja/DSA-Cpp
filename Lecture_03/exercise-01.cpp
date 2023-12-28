#include <iostream>
using namespace std;
int main()
{
    int lowercase_01 = 'a';
    int lowercase_02 = 'z';
    int uppercase_01 = 'A';
    int uppercase_02 = 'Z';
    
    char ch;
    cout << "Enter the character : " << endl;
    cin >> ch ; 
    // input variable ke liye 'char' datatype hi lena hoga.
    // because jo datatype hoga, compiler wahi value accept karega.
    int i = int(ch);
    if (i >= uppercase_01 && i <= uppercase_02){
        cout << "This is uppercase" << endl;
    }
    else if (i >= lowercase_01 && i <= lowercase_02){
        cout << "This is lowercase" << endl;
    }
    else if (i >= 48 && i <= 57) //ASCII --> for 0 => 48, for 9 => 57
    {
        cout << "This is numeric" << endl;
    }
    else 
    {
        cout << "invalid input, please enter valid input." << endl;
    }

    return 0;
}
