#include <bits/stdc++.h>
using namespace std;
void printVector5(vector<int>&v)
{
    for (vector<int>::iterator it_begin=v.begin();it_begin!=v.end() ; it_begin++)
    {
        cout << *it_begin<<" ";
    }
    cout << endl;
}
void method16()
{
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<10 ;i++ )
    {
        v1.push_back(i);
        v2.push_back(9-i);
    }
    cout << "v1=";
    printVector5(v1);
    cout << "v2=";
    printVector5(v2);
    v1.swap(v2);
    cout << "v1=";
    printVector5(v1);
    cout << "v2=";
    printVector5(v2);

}
void method17()
{
    //clever use of swap can shrink memory space
    vector<int> v1;
    for (int i=0;i<100000 ;i++ )
    {
        v1.push_back(i);
    }
    cout << "The capacity of vector is "<<v1.capacity() << endl;
    cout << "The size of vector is "<<v1.size() << endl;
    v1.resize(3);
    cout << "The capacity of vector is "<<v1.capacity() << endl;
    cout << "The size of vector is "<<v1.size() << endl;
    vector<int>(v1).swap(v1);
    cout << "The capacity of vector is "<<v1.capacity() << endl;
    cout << "The size of vector is "<<v1.size() << endl;
}
int main_126()
{
//    method16();
    method17();
    return 0;
}
