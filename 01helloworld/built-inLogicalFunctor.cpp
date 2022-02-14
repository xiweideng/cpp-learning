#include <bits/stdc++.h>
using namespace std;
void printBoolVector(const vector<bool>&v)
{
    for (vector<bool>::const_iterator it=v.begin();it!=v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout <<  endl;
}
void test21()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    v.push_back(false);
    printBoolVector(v);
    vector<bool> v2;
    v2.resize(v.size());
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    printBoolVector(v2);
}
int main_163()
{
    test21();
    return 0;
}
