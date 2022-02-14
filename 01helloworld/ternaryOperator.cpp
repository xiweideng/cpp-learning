#include <iostream>
using namespace std;

int main19()
{
    //declare three variables
    int a=10;
    int b=20;
    int c=0;
    // The ternary operator result can be a rvalue.
    c=(a>b)?a:b;
    cout << "c="<<c << endl;
    // The ternary operator result can be a lvalue.
    (a>b)?a:b=100;
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    return 0;
}
