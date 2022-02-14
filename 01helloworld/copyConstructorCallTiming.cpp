#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int age;
    //constructor without parameters,namely,default constructor
    Person()
    {
        cout << "Person() is called!" << endl;
    }
    //constructor with  parameters
    Person(int a)
    {
        age=a;
        cout << "Person(int a) is called!" << endl;
    }
    //copy constructor
    Person(const Person &person)
    {
        age=person.age;
        cout << "Person(const Person &person) is called!" << endl;
    }
    //destructor
    ~Person()
    {
        cout << "~Person() is called!" << endl;
    }
};
void doWork(Person p)
{

}
Person doWork2()
{
    Person p;
    cout << "doWork2 p="<<&p << endl;
    return p;
}
int main_80()
{
//    Person p1(10);
//    Person p2(p1);
//    doWork(p2);
    Person p3=doWork2();
    cout << "main p3="<<&p3 << endl;
    return 0;
}
