#include <bits/stdc++.h>
using namespace std;
void printVector1(vector<int>&v)
{
    for (vector<int>::iterator it_begin=v.begin();it_begin!=v.end() ; it_begin++)
    {
        cout << *it_begin;
    }
    cout << endl;
}
void method12()
{
    vector<int> v1;
    for (int i=0;i<5 ;i++ )
    {
        v1.push_back(i);
    }
    printVector1(v1);
    vector<int> v2=v1;
    printVector1(v2);
    vector<int> v3;
    v3.assign(v2.begin(),v2.end());
    printVector1(v3);
    vector<int> v4;
    v4.assign(10,13);
    printVector1(v4);
}
int main_122()
{
    method12();
    return 0;
}
