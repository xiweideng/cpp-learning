#include <bits/stdc++.h>
using namespace std;
void printVector10(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test38()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    vector<int> vt;
    vt.resize(v.size());
    copy(v.begin(),v.end(),vt.begin());
    printVector10(vt);
    vector<int> vt1=v;
    printVector10(vt1);
}
int main_176()
{
    test38();
    return 0;
}
