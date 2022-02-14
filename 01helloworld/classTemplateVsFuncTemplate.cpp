#include <bits/stdc++.h>
using namespace std;
//default type
template<typename NameType,typename AgeType=int>
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
int main_102()
{
    //error,no automatic type derivation
    //Person person("Jack",33);
    Person<string,int> person1("Jack",33);
    person1.show();
    Person<string> person2("Lisa",17);
    person2.show();
    return 0;
}
