#include <bits/stdc++.h>
using namespace std;

int main_43()
{
    int a=10;
    // pointer definition
    // dtype * pointer_name
    int * p=&a;
    cout << "&a="<<&a << endl;
    cout << "p="<<p << endl;
    // pointer usage
    // dereference
    *p=1000;
    cout << a << endl;
    cout << *p << endl;
    return 0;
}
