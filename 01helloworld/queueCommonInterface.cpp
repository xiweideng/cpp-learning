#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person()
    {

    }
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
void method28()
{
    queue<Person> q;
    Person p1("TangSeng",30);
    Person p2("SunWukong",1000);
    Person p3("ZhuBajie",800);
    Person p4("ShaSeng",600);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    cout << "The size of queue is "<<q.size() << endl;
    while (!q.empty())
    {
        cout << "The name of front element is "<<q.front().name << endl;
        cout << "The age of front element is "<<q.front().age << endl;
        cout << "The name of back element is "<<q.back().name << endl;
        cout << "The age of back element is "<<q.back().age << endl;
        q.pop();
    }
    cout << "The size of queue is "<<q.size() << endl;
}
int main_136()
{
    method28();
    return 0;
}
