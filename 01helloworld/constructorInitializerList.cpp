#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    double a;
    double b;
    //initializer list
    Person(int m,int n):a(m),b(n)
    {

    }
    Person(float m,float n)
    {
        a=m;
        b=n;
    }
};
int main_83()
{
    Person p(10.0f,30.0f);
    cout << p.a << endl;
    cout << p.b << endl;
    return 0;
}
