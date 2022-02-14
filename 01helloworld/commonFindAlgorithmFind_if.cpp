#include <bits/stdc++.h>
using namespace std;
class GreaterSix
{
public:
    bool operator()(int val)
    {
        return val>6;
    }
};
class Dog1
{
public:
    string name;
    int age;
    Dog1(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
void test26()
{
    vector<int> v;
    for (int i=0; i<10 ; i++ )
    {
        v.push_back(i);
    }
    vector<int>::iterator it=find_if(v.begin(),v.end(),GreaterSix());
    if (it==v.end())
    {
        cout << "Don't find the specific element!" << endl;
    }
    else
    {
        cout << "find the specific element " <<*it<< endl;
    }
}
class GreaterTwenty
{
public:
    bool operator()(Dog1 &d)
    {
        return d.age>20;
    }
};
void test27()
{
    vector<Dog1> v;
    Dog1 d1("d1",1);
    Dog1 d2("d2",8);
    Dog1 d3("d3",13);
    Dog1 d4("d4",25);
    Dog1 d5("d5",5);
    v.push_back(d1);
    v.push_back(d2);
    v.push_back(d3);
    v.push_back(d4);
    v.push_back(d5);
    vector<Dog1>::iterator it=find_if(v.begin(),v.end(),GreaterTwenty());
    if (it==v.end())
    {
        cout << "Don't find the specific element!" << endl;
    }
    else
    {
        cout << "find the specific element "<<it->age << endl;
    }
}
int main_167()
{
//    test26();
    test27();
    return 0;
}
