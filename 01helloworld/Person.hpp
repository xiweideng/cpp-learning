#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#pragma once
#include <bits/stdc++.h>
using namespace std;
template<typename NameType,typename AgeType>
class Person
{
public:
    NameType name;
    AgeType age;
    Person(NameType name,AgeType age);
    void show();
};
template<typename NameType,typename AgeType>
Person<NameType,AgeType>::Person(NameType name,AgeType age)
{
        this->name=name;
        this->age=age;
}
template<typename NameType,typename AgeType>
void Person<NameType,AgeType>::show()
{
        cout << "Name:"<<this->name << endl;
        cout << "Age:"<<this->age << endl;
}
#endif // PERSON_H_INCLUDED
