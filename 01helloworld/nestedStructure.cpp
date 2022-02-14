#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
struct Teacher
{
    int id;
    string name;
    int age;
    struct Student stu;
};

int main_54()
{
    //create an instance of struct Teacher
    struct Teacher teacher={11010,"lw",50,{"zs",15,100}};
    struct Teacher * tp=&teacher;
    struct Student * sp=&(tp->stu);
    cout << sp->age << endl;
    return 0;
}
