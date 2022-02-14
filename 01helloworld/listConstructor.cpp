#include <bits/stdc++.h>
using namespace std;
void printIntList(const list<int>&l)
{
    for (list<int>::const_iterator it_begin=l.begin(); it_begin!=l.end() ; it_begin++ )
    {
        cout << *it_begin <<" ";
    }
    cout   << endl;
}
void method29()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    printIntList(l);
    list<int> l1(l.begin(),l.end());
    printIntList(l1);
    list<int> l2(l1);
    printIntList(l2);
    list<int> l3(10,30);
    printIntList(l3);
}
int main_137()
{
    method29();
    return 0;
}
