#include <bits/stdc++.h>
using namespace std;
void print2(int val)
{
    cout << val << " ";
}
class Print2
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
void test22()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    for_each(v.begin(),v.end(),print2);
    cout   << endl;
    for_each(v.begin(),v.end(),Print2());
}
int main_164()
{
    test22();
    return 0;
}
