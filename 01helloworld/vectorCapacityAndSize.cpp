#include <bits/stdc++.h>
using namespace std;
void printVector2(vector<int>&v)
{
    for (vector<int>::iterator it_begin=v.begin();it_begin!=v.end() ; it_begin++)
    {
        cout << *it_begin;
    }
    cout << endl;
}
void method13()
{
    vector<int> v1;
    for (int i=0;i<5 ;i++ )
    {
        v1.push_back(i);
    }
    printVector2(v1);
    if (v1.empty())
    {
       cout << "vector is empty!" << endl;
    }
    else
    {
        cout << "vector isn't empty!" << endl;
        cout << "The capacity of vector is "<<v1.capacity() << endl;
        cout << "The size of vector is "<<v1.size() << endl;
    }
    v1.resize(10,6);
    printVector2(v1);
    v1.resize(5);
    printVector2(v1);
}
int main_123()
{
    method13();
    return 0;
}
