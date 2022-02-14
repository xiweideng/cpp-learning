#include <bits/stdc++.h>
using namespace std;
class Dog
{
public:
    string name;
    int age;
    Dog(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    bool operator==(const Dog &d1)
    {
        return d1.age==this->age && d1.name==this->name;
    }
};
void test24()
{
    vector<int> v;
    for (int i=0;i<10 ;i++ )
    {
        v.push_back(i);
    }
    vector<int>::iterator it=find(v.begin(),v.end(),4);
    if (it!=v.end())
    {
        cout << "Exist " <<*it<< endl;
    }
    else
    {
        cout << "Don't exist " << endl;
    }
}
void test25()
{
    vector<Dog> v;
    Dog d1("d1",1);
    Dog d2("d2",2);
    Dog d3("d3",3);
    Dog d4("d4",4);
    Dog d5("d5",5);
    v.push_back(d1);
    v.push_back(d2);
    v.push_back(d3);
    v.push_back(d4);
    v.push_back(d5);
    Dog d7("d2",2);
    vector<Dog>::iterator it=find(v.begin(),v.end(),d7);
    if (it!=v.end())
    {
        cout << "Exist " <<"Name:"<<it->name<<" Age:"<<it->age<< endl;
    }
    else
    {
        cout << "Don't exist " << endl;
    }
}
int main_166()
{
//    test24();
    test25();
    return 0;
}
