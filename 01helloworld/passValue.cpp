#include <bits/stdc++.h>
using namespace std;

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main_39()
{
    int a=10;
    int b=20;
    cout << "before" << endl;
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    swap(a,b);
    cout << "after" << endl;
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    return 0;
}
