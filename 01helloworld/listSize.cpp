#include <bits/stdc++.h>
using namespace std;
void printIntList2(const list<int>&l)
{
    for (list<int>::const_iterator it_begin=l.begin(); it_begin!=l.end() ; it_begin++ )
    {
        cout << *it_begin <<" ";
    }
    cout   << endl;
}
void method32()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    printIntList2(l);
    if (l.empty())
    {
        cout << "List is empty!" << endl;
    }
    else
    {
        cout << "List isn't empty!" << endl;
        cout << "The size of list is "<<l.size() << endl;
    }
    l.resize(10);
    printIntList2(l);
    l.resize(12,22);
    printIntList2(l);
    l.resize(2);
    printIntList2(l);
}
int main_139()
{
    method32();
    return 0;
}
