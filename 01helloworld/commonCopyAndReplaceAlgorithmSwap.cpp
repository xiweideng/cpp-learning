#include <bits/stdc++.h>
using namespace std;
void printVector13(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test41()
{
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<10 ;i++ )
    {
        v1.push_back(i);
        v2.push_back(i+3);
    }
    printVector13(v1);
    printVector13(v2);
    cout << string(20,'*') << endl;
    swap(v1,v2);
    printVector13(v1);
    printVector13(v2);
}
int main_179()
{
    test41();
    return 0;
}
