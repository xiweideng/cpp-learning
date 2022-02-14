#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int age;
    mutable int score;
    void method1()
    {
        this->age=10;
    }
    void method2() const // A * const this=&a;
    {
        this->score=20;
    }
};
int main_90()
{
    A a;
    a.method1();
    a.method2();
    cout << a.age << endl;
    cout << a.score << endl;
    return 0;
}
