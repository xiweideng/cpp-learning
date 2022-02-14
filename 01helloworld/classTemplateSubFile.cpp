#include <bits/stdc++.h>
#include "Person.hpp"
using namespace std;
//template<typename NameType,typename AgeType>
//class Person
//{
//public:
//    NameType name;
//    AgeType age;
//    Person(NameType name,AgeType age);
//    void show();
//};
//template<typename NameType,typename AgeType>
//Person<NameType,AgeType>::Person(NameType name,AgeType age)
//{
//        this->name=name;
//        this->age=age;
//}
//template<typename NameType,typename AgeType>
//void Person<NameType,AgeType>::show()
//{
//        cout << "Name:"<<this->name << endl;
//        cout << "Age:"<<this->age << endl;
//}
void test111()
{
    Person<string,int> person("Jack",22);
    person.show();
}
int main_107()
{
    test111();
    return 0;
}
