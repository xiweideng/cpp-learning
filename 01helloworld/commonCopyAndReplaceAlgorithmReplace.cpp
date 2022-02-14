#include <bits/stdc++.h>
using namespace std;
void printVector11(const vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << v.at(i) << " ";
    }
    cout  << endl;
}
void test39()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    random_shuffle(v.begin(),v.end());
    printVector11(v);
    replace(v.begin(),v.end(),4,11);
    printVector11(v);
}
int main_177()
{
    srand((unsigned int)time(nullptr));
    test39();
    return 0;
}
