#include <bits/stdc++.h>
using namespace std;
void printVector16(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test45()
{
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<10 ;i++ )
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }
    printVector16(v1);
    printVector16(v2);
    vector<int> vt;
    vt.resize(v1.size()+v2.size());
    vector<int>::iterator itEnd=set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());
    for (vector<int>::iterator it=vt.begin(); it!=itEnd; it++)
    {
        cout << *it << " ";
    }
    cout   << endl;
    printVector16(vt);
}
int main_183()
{
    srand((unsigned int)time(nullptr));
    test45();
    return 0;
}
