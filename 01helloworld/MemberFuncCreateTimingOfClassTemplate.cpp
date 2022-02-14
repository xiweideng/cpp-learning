#include <bits/stdc++.h>
using namespace std;
class Person1
{
public:
    void show1()
    {
        cout << "Person1 show" << endl;
    }
};
class Person2
{
public:
    void show2()
    {
        cout << "Person2 show" << endl;
    }
};
template<class T>
class MyClass
{
public:
    T obj;
    void fun1()
    {
        obj.show1();
    }
    void fun2()
    {
        obj.show2();
    }
};
int main_103()
{
    MyClass<Person1> p1;
    p1.fun1();
    return 0;
}
