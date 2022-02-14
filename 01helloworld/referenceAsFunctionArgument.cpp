#include <bits/stdc++.h>
using namespace std;
//value pass
void my_swap1(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout << "my_swap1 a="<<a << endl;
    cout << "my_swap1 b="<<b << endl;
}
//address pass
void my_swap2(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout << "my_swap2 a="<<*a << endl;
    cout << "my_swap2 b="<<*b << endl;
}
//reference pass
void my_swap3(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout << "my_swap3 a="<<a << endl;
    cout << "my_swap3 b="<<b << endl;
}
int main_64()
{
    int a=1;
    int b=2;
//    my_swap1(a,b);
//    my_swap2(&a,&b);
    my_swap3(a,b);
    cout << "main a="<<a << endl;
    cout << "main b="<<b << endl;
    return 0;
}
