#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int age;
    int * height;
    //constructor without parameters,namely,default constructor
    Person()
    {
        cout << "Person() is called!" << endl;
    }
    //constructor with  parameters
    Person(int a,int h)
    {
        age=a;
        height=new int(h);
        cout << "Person(int a) is called!" << endl;
    }
    //copy constructor
    Person(const Person &person)
    {
        age=person.age;
        height=new int(*person.height);
        cout << "Person(const Person &person) is called!" << endl;
    }
    //destructor
    ~Person()
    {
        if (height != nullptr)
        {
            delete height;
            height=nullptr;
        }
        cout << "~Person() is called!" << endl;
    }
};
int main_82()
{
    Person p1(10,160);
    Person p2(p1);
    return 0;
}
