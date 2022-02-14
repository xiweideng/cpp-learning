#include <bits/stdc++.h>
using namespace std;
void test16()
{
    map<int,int> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(3,40));
    m.insert(make_pair(4,40));
    map<int,int>::iterator pos=m.find(4);
    if (pos!=m.end())
    {
        cout << "exist "<<pos->first << endl;
    }
    else
    {
        cout << "Don't exist "<<pos->first << endl;
    }
//    m[5]=50;
//    m[5]=51;
//    m[5]=56;
//    m.insert(make_pair(5,50));
//    m.insert(make_pair(5,51));
//    cout << "key=5,value="<<m.at(5) << endl;
    int num=m.count(3);
    cout << "The number of element is "<<num << endl;
}
int main_155()
{
    test16();
    return 0;
}
