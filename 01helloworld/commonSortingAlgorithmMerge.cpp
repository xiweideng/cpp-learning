#include <bits/stdc++.h>
using namespace std;
void printVector8(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test36()
{
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<10 ;i++ )
    {
        v1.push_back(i);
        v2.push_back(i+1);
    }
    printVector8(v1);
    printVector8(v2);
    vector<int> vt;
    vt.resize(v1.size()+v2.size());
    //Containers must be ordered sequences;
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());
    printVector8(vt);
}
int main_174()
{
    test36();
    return 0;
}
