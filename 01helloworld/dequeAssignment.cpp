#include <bits/stdc++.h>
using namespace std;
void printIntDeque1(const deque<int>&d)
{
    for (deque<int>::const_iterator it_begin=d.begin();it_begin!=d.end() ;it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout<<endl;
}
void method20()
{
    deque<int> d1;
    for (int i=0;i<10 ; i++)
    {
        d1.push_back(i);
    }
    printIntDeque1(d1);
    deque<int> d2=d1;
    printIntDeque1(d2);
    deque<int> d3;
    d3.assign(d2.begin(),d2.end());
    printIntDeque1(d3);
    deque<int> d4;
    d4.assign(10,20);
    printIntDeque1(d4);
 }
int main_129()
{
    method20();
    return 0;
}
