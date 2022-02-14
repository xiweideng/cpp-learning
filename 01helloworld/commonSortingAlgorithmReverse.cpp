#include <bits/stdc++.h>
using namespace std;
void printVector9(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test37()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    printVector9(v);
    reverse(v.begin(),v.end());
    printVector9(v);
}
int main_175()
{
    test37();
    return 0;
}
