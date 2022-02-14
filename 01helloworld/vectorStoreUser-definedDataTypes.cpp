#include <bits/stdc++.h>
using namespace std;
struct Person
{
    string name;
    int age;
    Person()
    {

    }
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
void traverse(Person p)
{
    cout << "Name:"<<p.name;
    cout << " Age:"<<p.age << endl;
}
void test1()
{
    vector<Person> v;
    Person p1("Jack",20);
    Person p2("Jerry",16);
    Person p3("Mary",17);
    Person p4("Linda",24);
    Person p5("Lucy",19);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    for_each(v.begin(),v.end(),traverse);
    cout << "**************************" << endl;
    for (vector<Person>::iterator it_begin=v.begin();it_begin!=v.end() ;it_begin++ )
    {
        cout << "Name:" <<it_begin->name<< " ";
        cout << "Age:" <<it_begin->age<< endl;
//        cout << typeid(it_begin).name() << endl;
    }
}
void test2()
{
    vector<Person*> v;
    Person p1("Jack",20);
    Person p2("Jerry",16);
    Person p3("Mary",17);
    Person p4("Linda",24);
    Person p5("Lucy",19);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    for (vector<Person*>::iterator it_begin=v.begin();it_begin!=v.end() ;it_begin++ )
    {
        cout << "Name:" <<(*it_begin)->name<< " ";
        cout << "Age:" <<(*it_begin)->age<< endl;
    }
}
int main_111()
{
//    test1();
    test2();
    return 0;
}
