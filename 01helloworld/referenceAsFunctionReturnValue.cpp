#include <bits/stdc++.h>
using namespace std;
//Don't return the ref of local var
int & test07()
{
    int a=10;
    return a;
}
//As left value
int & test08()
{
    static int a=10;
    return a;
}
int main_65()
{
//    int &ref_a=test07();
//    cout << ref_a << endl;
    int &ref_a=test08();
    cout << ref_a << endl;
    test08()=100;
    cout << ref_a << endl;
    return 0;
}
