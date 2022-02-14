#include <bits/stdc++.h>
using namespace std;
void test42()
{
    vector<int> v;
    for (int i=0;i<100 ;i++ )
    {
        v.push_back(i+1);
    }
    int res=accumulate(v.begin(),v.end(),0);

    cout << res << endl;
}
int main_180()
{
    test42();
    return 0;
}
