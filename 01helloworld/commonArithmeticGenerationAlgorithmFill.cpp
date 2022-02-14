#include <bits/stdc++.h>
using namespace std;
void printVector14(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test43()
{
    vector<int> v;
    v.resize(10);
    printVector14(v);
    fill(v.begin(),v.end(),1);
    printVector14(v);

}
int main_181()
{
    test43();
    return 0;
}
