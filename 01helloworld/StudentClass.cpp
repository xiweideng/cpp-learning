#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    string id;
    string getName()
    {
        return this->name;
    }
    string getId()
    {
        return this->id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setId(string id)
    {
        this->id=id;
    }
};

int main_72()
{
    Student student;
    student.setName("ZhangSan");
    student.setId("2019223757");
    cout << "Name:"<<student.getName() << endl;
    cout << "Id:"<<student.getId() << endl;
    return 0;
}
