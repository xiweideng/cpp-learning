#include <bits/stdc++.h>
using namespace std;

//swap two integers
void swap11(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
}
//swap two integers
void swap12(int * p1,int * p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main_49()
{
    int a=10;
    int b=20;
    swap12(&a,&b);
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    return 0;
}
