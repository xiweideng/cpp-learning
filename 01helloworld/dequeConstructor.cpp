#include <bits/stdc++.h>
using namespace std;
void printIntDeque(const deque<int>&d)
{
    for (deque<int>::const_iterator it_begin=d.begin();it_begin!=d.end() ;it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout<<endl;
}
void method19()
{
    deque<int> d1;
    for (int i=0;i<10 ; i++)
    {
        d1.push_back(i);
    }
    printIntDeque(d1);
    deque<int> d2(++d1.begin(),--d1.end());
    printIntDeque(d2);
    deque<int> d3(10,20);
    printIntDeque(d3);
    deque<int> d4(d3);
    printIntDeque(d4);
}
int main_128()
{
    method19();
    return 0;
}
