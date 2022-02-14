#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};
int main_53()
{
    struct Student stu={"zs",15,100};
    struct Student * p=&stu;
    cout << "Name:" <<p->name<< endl;
    cout << "Age:" <<p->age<< endl;
    cout << "Score:" <<p->score<< endl;
    return 0;
}
