#include <bits/stdc++.h>
using namespace std;
void test6()
{
    set<int> s;
    s.insert(30);
    s.insert(20);
    s.insert(10);
    s.insert(40);
    set<int>::iterator it=s.find(50);
    if (it!=s.end())
    {
        cout << "exist " <<*it<< endl;
    }
    else
    {
        cout << "Don't exist "  <<*it<< endl;
    }
}
void test7()
{
    set<int> s;
    s.insert(30);
    s.insert(30);
    s.insert(30);
    s.insert(20);
    s.insert(10);
    s.insert(10);
    s.insert(40);
    int num=s.count(10);
    cout << "num="<<num << endl;
}

int main_147()
{
//    test6();
    test7();
    return 0;
}
