#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int age;
    Person(int age)
    {
        this->age=age;
    }
    Person& PersonAddAge(Person &p)
    {
        this->age+=p.age;
        return *this;
    }
};
int main_88()
{
    Person p1(10);
    Person p2(20);
    p2.PersonAddAge(p1).PersonAddAge(p1);
    cout << p2.age << endl;
    return 0;
}
