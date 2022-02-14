#include <bits/stdc++.h>
using namespace std;
void printMap(const map<int,int>&m)
{
    for (map<int,int>::const_iterator it=m.begin(); it!=m.end();it++ )
    {
        cout << "key="<<it->first<<" value=" <<it->second<< endl;
    }
}
void test12()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,20));
    m.insert(pair<int,int>(3,10));
    m.insert(pair<int,int>(3,12));
    m.insert(pair<int,int>(2,30));
    m.insert(pair<int,int>(5,35));
    m.insert(pair<int,int>(5,40));
    m.insert(pair<int,int>(4,50));
    printMap(m);
    map<int,int>m2(m);
    cout << string(20,'*') << endl;
    printMap(m2);
    map<int,int>m3=m2;
    cout << string(20,'*') << endl;
    printMap(m3);
}
int main_152()
{
    test12();
    return 0;
}
