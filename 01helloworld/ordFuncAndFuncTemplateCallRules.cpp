#include <bits/stdc++.h>
using namespace std;
void print(int a,int b)
{
    cout << "invoke ordinary function!" << endl;
}
template<typename T>
void print(T a,T b)
{
    cout << "invoke function template T a,T b!" << endl;
}
template<typename T>
void print(T a,T b,T c)
{
    cout << "invoke function template T a,T b,T c!" << endl;
}
int main_100()
{
    int a=10;
    int b=20;
    int c=30;
    char d='d';
    char e='e';
    print(a,b);
    //empty template parameter list
    print<>(a,b);
    print(a,b,c);
    print(d,e);
    return 0;
}
