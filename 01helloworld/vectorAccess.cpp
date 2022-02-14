#include <bits/stdc++.h>
using namespace std;
void printVector4(vector<int>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout<<v[i]<<" ";
    }
    cout  << endl;
}
void method15()
{
    vector<int> v1;
    for (int i=0;i<10 ;i++ )
    {
        v1.push_back(i);
    }
    cout << endl;
    printVector4(v1);
    cout << "The first element of vector is "<<v1.front() << endl;
    cout << "The last element of vector is "<<v1.back() << endl;
    v1.front()=20;
    v1.back()=30;
    cout << "The first element of vector is "<<v1.front() << endl;
    cout << "The last element of vector is "<<v1.back() << endl;

}
int main_125()
{
    method15();
    return 0;
}
