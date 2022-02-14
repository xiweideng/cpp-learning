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
int main_79()
{
    //invoke default constructor
//    Person person1;
//    Person person2(10);
//    Person person3(person2);
//    cout << "The age of person2 is " <<person2.age<< endl;
//    cout << "The age of person3 is " <<person3.age<< endl;
    //Don't invoke the default constructor with a pair of parentheses,because the compiler
    //treats it as a function declaration.
//    Person person4();
//    Person p1;
//    Person p2=Person(10);//There is an anonymous object to the right of the assignment
//    Person p3=Person(p2);
    //Don't use copy constructor to initialize an anonymous object.
//    Person(p3);
//    Person(10);
//    cout << "aaaaaa" << endl;
    //implicit conversion
    Person p1=10;
    Person p2=p1;
    return 0;
}
