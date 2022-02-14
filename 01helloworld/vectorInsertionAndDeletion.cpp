#include <bits/stdc++.h>
using namespace std;
void printVector3(vector<int>&v)
{
    for (vector<int>::iterator it_begin=v.begin();it_begin!=v.end() ; it_begin++)
    {
        cout << *it_begin<<" ";
    }
    cout << endl;
}
void method14()
{
    vector<int> v1;
    for (int i=1;i<10 ;i++ )
    {
        v1.push_back(i*10);
    }
    printVector3(v1);
    v1.pop_back();
    printVector3(v1);
    v1.insert(v1.begin(),100);
    printVector3(v1);
    v1.insert(v1.begin(),2,90);
    printVector3(v1);
    v1.erase(v1.begin());
    printVector3(v1);
    v1.erase(++v1.begin(),--v1.end());
    printVector3(v1);
    v1.clear();
    printVector3(v1);
}
int main_124()
{
    method14();
    return 0;
}
