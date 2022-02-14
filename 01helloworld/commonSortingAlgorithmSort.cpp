#include <bits/stdc++.h>
using namespace std;
void print4(int val)
{
    cout << val << " ";
}
void test34()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        int res=rand()%50;
        v.push_back(res);
    }
    for_each(v.begin(),v.end(),print4);
    cout  << endl;
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),print4);
    cout  << endl;
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),print4);
    cout  << endl;

}
int main_172()
{
    srand((unsigned int)time(nullptr));
    test34();
    return 0;
}
