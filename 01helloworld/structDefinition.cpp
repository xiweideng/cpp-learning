#include <bits/stdc++.h>
using namespace std;
//create student data type.
//user-defined data type.
struct Student
{
    string name;
    int age;
    int score;
}student3;
int main_51()
{
    //create an instance of struct Student.
    //struct keyword can be ignored in Cpp when creating an instance.
    Student student1;
    student1.name="ZhangSan";
    student1.age=20;
    student1.score=95;
    //print members
    cout << "Name:" <<student1.name<< endl;
    cout << "Age:" <<student1.age<< endl;
    cout << "Score:" <<student1.score<< endl;
    //create an instance of struct Student.
    struct Student student2={"LiSi",19,100};
    //print members
    cout << "Name:" <<student2.name<< endl;
    cout << "Age:" <<student2.age<< endl;
    cout << "Score:" <<student2.score<< endl;
    //create an instance of struct Student.
    student3.name="WangWu";
    student3.age=17;
    student3.score=88;
    //print members
    cout << "Name:" <<student3.name<< endl;
    cout << "Age:" <<student3.age<< endl;
    cout << "Score:" <<student3.score<< endl;
    return 0;
}
