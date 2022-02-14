#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Base
{
public:
    T member;
};
class Son:public Base<int>
{

};
template<typename T1,typename T2>
class Son1:public Base<T2>
{
public:
    Son1()
    {
        cout << "T1 is "<<typeid(T1).name() << endl;
        cout << "T2 is "<<typeid(T2).name() << endl;
    }
    T1 obj;
};
int main_105()
{
    Son s1;
    cout << s1.member << endl;
    Son1<char,int> s2;
    cout << s2.member << endl;
    return 0;
}
