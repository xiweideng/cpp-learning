#include <bits/stdc++.h>
using namespace std;
void printIntList4(const list<int>&l)
{
    for (list<int>::const_iterator it_begin=l.begin(); it_begin!=l.end() ; it_begin++ )
    {
        cout << *it_begin <<" ";
    }
    cout   << endl;
}
bool myCompare(int v1,int v2)
{
    return v1>v2;
}
void method35()
{
    list<int> l;
    l.push_back(10);
    l.push_back(1);
    l.push_back(200);
    l.push_back(40);
    printIntList4(l);
//    l.reverse();
//Don't support the following sort
//    sort(l.begin(),l.end());
    l.sort();
    printIntList4(l);
    l.sort(myCompare);
    printIntList4(l);
}
int main_142()
{
    method35();
    return 0;
}
