#include <bits/stdc++.h>
using namespace std;
void showIntVector(vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test35()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    showIntVector(v);
    random_shuffle(v.begin(),v.end());
    showIntVector(v);
}
int main_173()
{
    srand((unsigned int)time(nullptr));
    test35();
    return 0;
}
