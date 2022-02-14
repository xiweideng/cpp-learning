#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int height;
    Person(string name,int age,int height)
    {
        this->name=name;
        this->age=age;
        this->height=height;
    }
};
void printPersonList(const list<Person>&l)
{
    for (list<Person>::const_iterator it_begin=l.begin();it_begin!=l.end() ;it_begin++ )
    {
        cout << "Name: "<<it_begin->name<<"\tAge: " <<it_begin->age<<"\tHeight:"<<it_begin->height<< endl;
    }
}
bool comparePerson(Person&p1,Person&p2)
{
    return p1.age==p2.age?p1.height>p2.height:p1.age<p2.age;
}
void method36()
{
    list<Person> l;
    Person p1("Jack",18,181);
    Person p2("Bob",20,165);
    Person p3("Alice",20,172);
    Person p4("Cinda",18,165);
    Person p5("Darling",20,181);
    Person p6("Eric",20,178);
    Person p7("Frank",18,178);
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    l.push_back(p6);
    l.push_back(p7);
    printPersonList(l);
    cout << string(34,'*') << endl;
    l.sort(comparePerson);
    printPersonList(l);
}
int main_143()
{
    method36();
    return 0;
}
