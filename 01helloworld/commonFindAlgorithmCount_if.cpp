#include <bits/stdc++.h>
using namespace std;
class GreaterThanTwenty
{
public:
    bool operator()(int val)
    {
        return val>20;
    }
};
void test32()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    int num=count_if(v.begin(),v.end(),GreaterThanTwenty());
    cout << "The number of integer greater than 20 is "<<num << endl;
}
struct Cat
{
    string cat_name;
    int cat_age;
    Cat(string cat_name,int cat_age)
    {
        this->cat_name=cat_name;
        this->cat_age=cat_age;
    }
};
class AgeGreater2
{
public:
    bool operator()(const Cat&c)
    {
        return c.cat_age>2;
    }
};
void test33()
{
    vector<Cat> v;
    Cat c1("a",1);
    Cat c2("b",2);
    Cat c3("f",4);
    Cat c4("d",3);
    Cat c5("f",1);
    v.push_back(c1);
    v.push_back(c2);
    v.push_back(c3);
    v.push_back(c4);
    v.push_back(c5);
    Cat c("f",1);
    int num=count_if(v.begin(),v.end(),AgeGreater2());
    cout << num << endl;

}
int main_171()
{
//    test32();
    test33();
    return 0;
}
