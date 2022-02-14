#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int age;
    static int year;
    static void method1()
    {
        cout << "static int year=" <<A::year<< endl;
    }
};
int A::year=2022;

int main_86()
{
    A a1;
    a1.method1();
    A::method1();
    return 0;
}
