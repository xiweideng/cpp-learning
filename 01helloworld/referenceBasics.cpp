#include <bits/stdc++.h>
using namespace std;

int main_63()
{
    int a=10;
    //declare an alias of a
    int &b=a;
    //declare a new variable c
    int c=a;
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    cout << "c="<<c << endl;
    b=100;
    c=20;
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    cout << "c="<<c << endl;
    return 0;
}
