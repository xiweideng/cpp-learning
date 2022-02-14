#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
/*
address pass
*/
void printStudent1(const struct Student *s)
{
    cout << "printStudent1" << endl;
    cout << s->name << endl;
    cout << s->age << endl;
    cout << s->score << endl;
}
int main_56()
{
    struct Student stu={"zs",15,100};
    Student * p=&stu;
    cout << sizeof(p) << endl;
    printStudent1(&stu);
    cout << "main" <<stu.age<< endl;
    return 0;
}
