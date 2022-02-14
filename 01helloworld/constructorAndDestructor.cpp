#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    //constructor
    Person()
    {
        cout << "Person() is called!" << endl;
    }
    //destructor
    ~Person()
    {
        cout << "~Person() is called!" << endl;
    }
};
int main_78()
{
    //Automatically invoke the constructor
    Person p1;
    return 0;
}
