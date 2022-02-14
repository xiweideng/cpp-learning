#include <bits/stdc++.h>
using namespace std;
class Person
{
    friend int main_91();
private:
    int age;
};

int main_91()
{
    Person p;
    p.age=10;
    cout << p.age << endl;
    return 0;
}
