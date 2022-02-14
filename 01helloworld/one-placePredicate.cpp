#include <bits/stdc++.h>
using namespace std;
//one-place predicate
class GreaterThanFive
{
public:
    bool operator()(int val)
    {
        return val>5;
    }
};
void test18()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    vector<int>::iterator it=find_if(v.begin(),v.end(),GreaterThanFive());
    if (it!=v.end())
    {
        cout << "Exist " <<*it<< endl;
    }
    else
    {
        cout << "Don't exist" << endl;
    }
}
int main_159()
{
    test18();
    return 0;
}
