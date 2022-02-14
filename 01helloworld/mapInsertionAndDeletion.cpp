#include <bits/stdc++.h>
using namespace std;
void printMap2(const map<int,int>&m)
{
    for (map<int,int>::const_iterator it=m.begin(); it!=m.end();it++ )
    {
        cout << "key="<<it->first<<" value=" <<it->second<< endl;
    }
}
void test15()
{
    map<int,int> m;
    //way 1
    m.insert(pair<int,int>(1,10));
    //way 2
    m.insert(make_pair(2,20));
    //way 3
    m.insert(map<int,int>::value_type(3,30));
    //way 4
//    unsafe operation
    m[4]=40;
//    cout << m.at(5) << endl;
    printMap2(m);
    m.erase(m.begin());
    cout << string(20,'*') << endl;
    printMap2(m);
    cout << string(20,'*') << endl;
    m.erase(4);
    m.erase(20);
    printMap2(m);
    cout << string(20,'*') << endl;
    m.erase(++m.begin(),--m.end());
    printMap2(m);
    m.clear();
    printMap2(m);

}
int main_154()
{
    test15();
    return 0;
}
