#include <bits/stdc++.h>
using namespace std;
int add1(int a,int b)
{
    return a+b;
}
template<typename T>
T add2(T a,T b)
{
    return a+b;
}
int main_99()
{
    int a=10;
    char b='a';
    //implicit type conversion
    cout << add1(a,b) << endl;
    //specify type
    cout << add2<int>(a,b) << endl;
    //automatic type derivation,error
//    cout << add2(a,b) << endl;
    return 0;
}
