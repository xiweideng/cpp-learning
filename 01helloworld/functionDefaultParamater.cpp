#include <bits/stdc++.h>
using namespace std;

int func3(int a,int b,int c=30);
//default parameters can only exist in one place of declaration and definition.
int func3(int a,int b=20,int c)
{
    return a+b+c;
}
int main_67()
{
    cout << func3(1,2) << endl;
    return 0;
}
