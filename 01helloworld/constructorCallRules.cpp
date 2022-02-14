#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int age;
//    //constructor without parameters,namely,default constructor
//    Person()
//    {
//        cout << "Person() is called!" << endl;
//    }
    //constructor with  parameters
    Person(int a)
    {
        age=a;
        cout << "Person(int a) is called!" << endl;
    }
//    //copy constructor
//    Person(const Person &person)
//    {
//        age=person.age;
//        cout << "Person(const Person &person) is called!" << endl;
//    }
    //destructor
    ~Person()
    {
        cout << "~Person() is called!" << endl;
    }
};
int main_81()
{
//    Person p1;
//    p1.age=18;
    Person p1(10);
    Person p2(p1);
    cout << "The age of p2 is "<<p2.age << endl;
    return 0;
}
