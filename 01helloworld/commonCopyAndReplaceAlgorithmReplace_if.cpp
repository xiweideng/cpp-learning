#include <bits/stdc++.h>
using namespace std;
class ReplaceGreaterEqual30
{
public:
    bool operator()(int val)
    {
        return val>=30;
    }
};
void printVector12(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test40()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(rand()%50);
    }
    printVector12(v);
    replace_if(v.begin(),v.end(),ReplaceGreaterEqual30(),300);
    printVector12(v);
}
int main_178()
{
    srand((unsigned int)time(nullptr));
    test40();
    return 0;
}
