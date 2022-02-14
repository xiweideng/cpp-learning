#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
/*
value pass
*/
void printStudent1(struct Student s)
{
    s.age=100;
    cout << "printStudent1" << endl;
    cout << s.name << endl;
    cout << s.age << endl;
    cout << s.score << endl;
}
/*
address pass
*/
void printStudent2(struct Student * sp)
{
    sp->age=200;
    cout << "printStudent2" << endl;
    cout << sp->name<< endl;
    cout << sp->age << endl;
    cout << sp->score << endl;
}
int main_55()
{
    struct Student stu={"zs",15,100};
    printStudent1(stu);
    printStudent2(&stu);
    cout << "main" << endl;
    cout << stu.name << endl;
    cout << stu.age << endl;
    cout << stu.score<< endl;
    return 0;
}
