#include <bits/stdc++.h>
using namespace std;
void traverse(vector<int> v)
{
    for (vector<int>::iterator it_begin=v.begin();it_begin!=v.end() ;it_begin++ )
    {
        cout << *it_begin <<" ";
    }
    cout<<endl;
}
void test()
{
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;
    for (int i=0;i<4;i++){
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
        v4.push_back(i+4);
        v5.push_back(i+5);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    for_each(v.begin(),v.end(),traverse);
}
int main_112()
{
    test();
    return 0;
}
