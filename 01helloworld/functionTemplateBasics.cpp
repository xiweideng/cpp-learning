#include <bits/stdc++.h>
using namespace std;
//declare a template,generic programming
template<typename T>
void my_swap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main_96()
{
    int a=10;
    int b=15;
    //automatic type derivation
    my_swap(a,b);
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    //specify data type
    my_swap<int>(a,b);
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    return 0;
}
