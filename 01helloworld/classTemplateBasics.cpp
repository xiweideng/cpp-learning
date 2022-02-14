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
int main_101()
{
    Person<string,int> person("Jack",33);
    person.show();
    return 0;
}
