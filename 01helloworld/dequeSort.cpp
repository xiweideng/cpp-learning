#include <bits/stdc++.h>
using namespace std;
void printIntDeque4(const deque<int>&d)
{
    for (deque<int>::const_iterator it_begin=d.begin();it_begin!=d.end() ;it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout<<endl;
}
void method26()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(30);
    d1.push_back(20);
    d1.push_back(300);
    d1.push_back(100);
    d1.push_back(200);
    printIntDeque4(d1);
    sort(d1.begin(),d1.end());
    printIntDeque4(d1);
}
int main_133()
{
    method26();
    return 0;
}
