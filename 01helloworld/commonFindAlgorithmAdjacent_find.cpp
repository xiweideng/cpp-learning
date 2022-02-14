#include <bits/stdc++.h>
using namespace std;
void test28()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    vector<int>::iterator it=adjacent_find(v.begin(),v.end());
    if (it==v.end())
    {
        cout << "Don't find!" << endl;
    }
    else
    {
        cout << "find "<<*it << endl;
    }
}
int main_168()
{
    test28();
    return 0;
}
