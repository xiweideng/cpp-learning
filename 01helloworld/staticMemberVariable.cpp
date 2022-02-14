#include <bits/stdc++.h>
using namespace std;
//static member variable
class A
{
public:
    //declare inside the class A
    static int age;
};
//initiate outside the class A
int A::age=20;
int main_85()
{
//    A a1;
//    cout << "a1.age="<<a1.age << endl;
//    A a2;
//    a2.age=30;
//    cout << "a1.age="<<a1.age << endl;
    A a1;
    cout << a1.age << endl;
    cout << A::age << endl;
    return 0;
}
