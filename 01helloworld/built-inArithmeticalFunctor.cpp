#include <bits/stdc++.h>
using namespace std;

int main_161()
{
    negate<int> n;
    plus<int> p;
    minus<int> m;
    multiplies<int> mp;
    divides<int> d;
    modulus<int> md;
    cout << n(10) << endl;
    cout << p(10,20) << endl;
    cout <<m(20,12) << endl;
    cout <<mp(2,3) << endl;
    cout <<d(3,2) << endl;
    cout <<md(11,3) << endl;
    return 0;
}
