#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
protected:
    string car;
private:
    string password;
public:
    void allocate()
    {
        name="zs";
        car="taitor";
        password="123456";
    }
};
int main_73()
{
    Person p1;
    p1.allocate();
    return 0;
}
