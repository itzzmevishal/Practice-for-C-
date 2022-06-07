#include <iostream>
using namespace std;


// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b, int d); // function prototype declaration
int sub(int a, int b, int d); // function prototype declaration

int main()
{
    int a, b, d, cat,dog;
    cout<<"Enter the 1st number:";
    cin>>a;
    cout<<"Enter the 2nd number:";
    cin>>b;
    cout<<"Enter the 3rd number:";
    cin>>d;
    cat = sum(a, b, d); // function call
    dog= sub(a, b, d);
    cout<<"The value of c is "<<cat<<endl;
    cout<<"The value of d is "<<dog<<endl;
    return 0;
}

int sum(int a, int b, int d)
{
    int c;
    c = a + b + d;
    return c;
}
int sub(int a, int b, int d)
{
    int c;
    c = (a - b) - d;
    return c;
}