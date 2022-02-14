#include <bits/stdc++.h>
using namespace std;
void test30()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(50);
    v.push_back(20);
    v.push_back(10);
    v.push_back(10);
    int elem=10;
    int num=count(v.begin(),v.end(),elem);
    cout << "The number of "<<elem<<" is " <<num<< endl;
}
struct Pig
{
    string pig_name;
    int pig_age;
    Pig(string pig_name,int pig_age)
    {
        this->pig_name=pig_name;
        this->pig_age=pig_age;
    }
    bool operator==(const Pig &p)
    {
        return p.pig_name==this->pig_name && p.pig_age==this->pig_age;
    }
};
void test31()
{
    vector<Pig> v;
    Pig p1("a",1);
    Pig p2("b",2);
    Pig p3("f",1);
    Pig p4("d",3);
    Pig p5("f",1);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    Pig p("f",1);
    int num=count(v.begin(),v.end(),p);
    cout << num << endl;
}
int main_170()
{
//    test30();
    test31();
    return 0;
}
