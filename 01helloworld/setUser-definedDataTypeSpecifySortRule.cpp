#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
class PersonCompare
{
public:
    bool operator()(const Person&p1,const Person&p2)
    {
        return p1.age>p2.age;
    }
};
void printPersonSet(const set<Person,PersonCompare>&s)
{
    for (set<Person,PersonCompare>::const_iterator it=s.begin();it!=s.end() ;it++ )
    {
        cout << "Name:" << it->name<<"\tAge:"<<it->age<<endl;
    }
}
void test11()
{
    set<Person,PersonCompare> s;
    Person p1("Jack",18);
    Person p2("Bob",20);
    Person p3("Alice",21);
    Person p4("Cinda",19);
    Person p5("Darling",25);
    Person p6("Eric",28);
    Person p7("Frank",16);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    s.insert(p5);
    s.insert(p6);
    s.insert(p7);
    printPersonSet(s);
}
int main_151()
{
    test11();
    return 0;
}
