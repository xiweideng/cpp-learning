#include <bits/stdc++.h>
using namespace std;

int * func()
{
    int a=10;
    return &a;
}
int main_60()
{
    int * p=func();
    cout << *p << endl;
    return 0;
}
