#include <bits/stdc++.h>
using namespace std;
void printVector15(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void createVector(vector<int>&v,int elem_num=10)
{
    for (int i=0;i<elem_num ;i++ )
    {
        int res=rand()%15;
        v.push_back(res);
    }
}
void test44()
{
    vector<int> v1;
    vector<int> v2;
    createVector(v1,15);
    createVector(v2);
    printVector15(v1);
    printVector15(v2);
    vector<int> vt;
    vt.resize(min(v1.size(),v2.size()));
    vector<int>::iterator itEnd=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());
    for (vector<int>::iterator it=vt.begin(); it!=itEnd; it++)
    {
        cout << *it << " ";
    }
    cout   << endl;
    printVector15(vt);
}
int main_182()
{
    srand((unsigned int)time(nullptr));
    test44();
    return 0;
}
