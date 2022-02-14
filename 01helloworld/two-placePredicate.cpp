#include <bits/stdc++.h>
using namespace std;
class CompareVector
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }

};
void printVector6(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test19()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);
    printVector6(v);
    sort(v.begin(),v.end());
    printVector6(v);
    sort(v.begin(),v.end(),CompareVector());
    printVector6(v);
}
int main_160()
{
    test19();
    return 0;
}
