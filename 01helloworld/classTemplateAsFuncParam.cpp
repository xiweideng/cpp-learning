#include <bits/stdc++.h>
using namespace std;
template<typename NameType,typename AgeType>
class Person
{
public:
    NameType name;
    AgeType age;
    Person(NameType name,AgeType age)
    {
        this->name=name;
        this->age=age;
    }
    void show()
    {
        cout << "Name:"<<this->name << endl;
        cout << "Age:"<<this->age << endl;
    }
};
void print1(Person<string,int>&p)
{
    p.show();
}
template<typename NameType,typename AgeType>
void print2(Person<NameType,AgeType>&p)
{
    p.show();
    cout << "NameType is "<<typeid(NameType).name() << endl;
    cout << "AgeType is "<<typeid(AgeType).name() << endl;
}
template<class T>
void print3(T &p)
{
    p.show();
    cout << "T is " <<typeid(T).name()<< endl;
}
int main_104()
{
    Person<string,int> p1("Jack",20);
    print1(p1);
    print2(p1);
    print3(p1);
    return 0;
}
