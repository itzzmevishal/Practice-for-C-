// check upper,lower case,numeric case

#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "\nEnter the Character between(A-Z,a-z,0-9):";
    cin >> a;
    if (a >= 97 && a <= 122)
    {
        cout << a << " is LOWER case";
    }
    else if (a >= 65 && a <= 90)
    {
        cout << a << " is UPPER case";
    }
    
    else if (a >= 48 && a <= 57)
    {
        cout << a << " is NUMERIC case";
    }
    else
    {
        cout << "Enter the Valid Character";
    }
}