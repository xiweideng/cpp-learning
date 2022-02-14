#include <bits/stdc++.h>
using namespace std;
int * func2()
{
    int * p=new int(10);
    return p;
}
void test05()
{
    int * p1=func2();
    cout << *p1 << endl;
    delete p1;
    //wild pointer
    cout << *p1 << endl;
    cout << *p1 << endl;
}
int * test06()
{
    int * arr=new int[10];
    for (int i=0;i<10 ;i++ )
    {
        arr[i]=i+100;
    }
    return arr;
}
int main_62()
{
//    test05();
    int * p=test06();
    for (int i=0;i<10 ;i++ )
    {
        cout << p[i] << endl;
    }
    delete[] p;
    for (int i=0;i<10 ;i++ )
    {
        cout << p[10-i] << endl;
    }
    return 0;
}
