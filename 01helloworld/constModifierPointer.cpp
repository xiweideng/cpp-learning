#include <bits/stdc++.h>
using namespace std;

int main_47()
{
    int a=10;
    int b=20;
    //const modifier pointer
    const int * p=&a;
    //*p=30;
    p=&b;
    //const modifier constant
    int * const p1=&b;
    //p1=&a;
    *p1=30;
    //const modifier pointer and constant
    const int * const p2=&a;
    //p2=&b;
    //*p2=10;
    return 0;
}
