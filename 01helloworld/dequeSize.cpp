#include <bits/stdc++.h>
using namespace std;
void printIntDeque2(const deque<int>&d)
{
    for (deque<int>::const_iterator it_begin=d.begin();it_begin!=d.end() ;it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout<<endl;
}
void method21()
{
    deque<int> d1;
    for (int i=0;i<10 ; i++)
    {
        d1.push_back(i);
    }
    printIntDeque2(d1);
    if (d1.empty())
    {
        cout << "deque is empty!" << endl;
    }
    else
    {
        cout << "deque isn't empty!" << endl;
        cout << "The size of deque is "<<d1.size() << endl;
    }
    d1.resize(15);
    printIntDeque2(d1);
    d1.resize(20,1);
    printIntDeque2(d1);
    d1.resize(12);
    printIntDeque2(d1);
 }
int main_130()
{
    method21();
    return 0;
}
