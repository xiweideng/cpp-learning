#include <bits/stdc++.h>
using namespace std;
class Transform
{
public:
    int operator()(int val)
    {
        return val+2;
    }
};
class Print3
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
void test23()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    vector<int> vt;
    vt.resize(v.size());
    transform(v.begin(),v.end(),vt.begin(),Transform());
    for_each(vt.begin(),vt.end(),Print3());
}
int main_165()
{
    test23();
    return 0;
}
