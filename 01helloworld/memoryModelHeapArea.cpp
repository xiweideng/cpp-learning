#include <bits/stdc++.h>
using namespace std;
int * func1()
{
    int * p=new int(10);
    return p;
}
int main_61()
{
    int * p1=func1();
    cout << *p1 << endl;
    return 0;
}
