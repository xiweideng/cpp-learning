#include <bits/stdc++.h>
using namespace std;
template<typename NameType,typename AgeType>
class Person;
template<typename NameType,typename AgeType>
void show1(Person<NameType,AgeType> p)
{
    cout << "Global Name:"<<p.name << endl;
    cout << "Global Age:"<<p.age << endl;
}
template<typename NameType,typename AgeType>
class Person
{
    friend void show(Person<NameType,AgeType> p)
    {
        cout << "Name:"<<p.name << endl;
        cout << "Age:"<<p.age << endl;
    }
    friend void show1<>(Person<NameType,AgeType> p);
private:
    NameType name;
    AgeType age;
public:
    Person(NameType name,AgeType age)
    {
        this->name=name;
        this->age=age;
    }
};

int main_108()
{
    Person<string,int> person("Jack",22);
    show(person);
    show1(person);
    return 0;
}
