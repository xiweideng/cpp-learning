#include <bits/stdc++.h>
using namespace std;
void printMap1(const map<int,int>&m)
{
    for (map<int,int>::const_iterator it=m.begin(); it!=m.end();it++ )
    {
        cout << "key="<<it->first<<" value=" <<it->second<< endl;
    }
}
void test13()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,20));
    m.insert(pair<int,int>(3,10));
    m.insert(pair<int,int>(3,12));
    m.insert(pair<int,int>(2,30));
    m.insert(pair<int,int>(5,35));
    m.insert(pair<int,int>(5,40));
    m.insert(pair<int,int>(4,50));
    if (m.empty())
    {
        cout << "Map is empty!" << endl;
    }
    else
    {
        cout << "Map isn't empty!" << endl;
        cout << "The size of map is "<<m.size() << endl;
    }
}
void test14()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,20));
    m.insert(pair<int,int>(3,10));
    m.insert(pair<int,int>(3,12));
    m.insert(pair<int,int>(2,30));
    m.insert(pair<int,int>(5,35));
    m.insert(pair<int,int>(5,40));
    m.insert(pair<int,int>(4,50));
    map<int,int> m1;
    m1.insert(pair<int,int>(1,20));
    m1.insert(pair<int,int>(3,10));
    m1.insert(pair<int,int>(3,12));
    m1.insert(pair<int,int>(2,30));
    printMap1(m);
    cout << string(20,'*') << endl;
    printMap1(m1);
    m.swap(m1);
    cout << string(20,'*') << endl;
    printMap1(m);
    cout << string(20,'*') << endl;
    printMap1(m1);
}

int main_153()
{
//    test13();
    test14();
    return 0;
}
