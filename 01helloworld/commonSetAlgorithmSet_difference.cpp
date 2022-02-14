#include <bits/stdc++.h>
using namespace std;
void printVector17(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test46()
{
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<10 ;i++ )
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }
    printVector17(v1);
    printVector17(v2);
    vector<int> vt;
    vt.resize(max(v1.size(),v2.size()));
    cout << "v1-v2" << endl;
    vector<int>::iterator itEnd=set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());
    for (vector<int>::iterator it=vt.begin(); it!=itEnd; it++)
    {
        cout << *it << " ";
    }
    cout   << endl;
    printVector17(vt);
    cout << "v2-v1" << endl;
    itEnd=set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),vt.begin());
    for (vector<int>::iterator it=vt.begin(); it!=itEnd; it++)
    {
        cout << *it << " ";
    }
    cout   << endl;
    printVector17(vt);
}
int main_184()
{
    test46();
    return 0;
}
