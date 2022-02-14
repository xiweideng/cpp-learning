#include <bits/stdc++.h>
using namespace std;
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};
void printIntSet3(const set<int> &s)
{
    for (set<int>::const_iterator it_begin=s.begin(); it_begin!=s.end() ; it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout <<   endl;
}
void test10()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(50);
    s1.insert(40);
    printIntSet3(s1);
    set<int,MyCompare> s2;
    s2.insert(10);
    s2.insert(30);
    s2.insert(20);
    s2.insert(50);
    s2.insert(40);
    for (set<int,MyCompare>::iterator it=s2.begin(); it!=s2.end() ; it++ )
    {
        cout << *it << " ";
    }
    cout  << endl;
}
int main_150()
{
    test10();
    return 0;
}
