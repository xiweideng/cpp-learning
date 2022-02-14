#include <bits/stdc++.h>
using namespace std;
class CompareVector1
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }

};
void printVector7(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test20()
{
    vector<int> v;
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);
    printVector7(v);
    sort(v.begin(),v.end());
    printVector7(v);
//    sort(v.begin(),v.end(),CompareVector1());
    sort(v.begin(),v.end(),greater<int>());
    printVector7(v);
}
int main_162()
{
    test20();
    return 0;
}
