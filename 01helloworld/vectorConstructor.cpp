#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>&v)
{
    for (vector<int>::iterator it_begin=v.begin();it_begin!=v.end() ; it_begin++)
    {
        cout << *it_begin;
    }
    cout << endl;
}
void method11()
{
    vector<int> v1;
    for (int i=0;i<5 ;i++ )
    {
        v1.push_back(i);
    }
    printVector(v1);
    vector<int> v2(v1.begin(),v1.end());
    printVector(v2);
    //n elem
    vector<int> v3(10,20);
    printVector(v3);
    //copy constructor
    vector<int> v4(v3);
    printVector(v4);
}
int main_121()
{
    method11();

    return 0;
}
