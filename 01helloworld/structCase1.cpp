#include <bits/stdc++.h>
using namespace std;
//struct student
struct Student
{
    string student_name;
    int score;
};
//struct teacher
struct Teacher
{
    string teacher_name;
    struct Student stu_arr[5];
};
void allocate_space(struct Teacher teacher_arr[],int len)
{
    srand((unsigned int)time(NULL));
    string name="ABCDE";
    for (int i=0;i<len ;i++ )
    {
        teacher_arr[i].teacher_name="Teacher_";
        teacher_arr[i].teacher_name+=name[i];
        for (int j=0;j<5 ;j++ )
        {
            teacher_arr[i].stu_arr[j].student_name="Student_";
            teacher_arr[i].stu_arr[j].student_name+=name[j];
            teacher_arr[i].stu_arr[j].score=rand()%100;
        }
    }
}
void print_info(struct Teacher teacher_arr[],int len)
{
    for (int i=0;i<len ;i++ )
    {
        cout << "Teacher Name:" <<teacher_arr[i].teacher_name<< endl;
        for (int j=0;j<5 ;j++ )
        {
            cout << "\tStudent Name:" <<teacher_arr[i].stu_arr[j].student_name<<" ";
            cout << "\tStudent Score:" <<teacher_arr[i].stu_arr[j].score<< endl;
        }
    }
}
int main_57()
{
    struct Teacher teacher_arr[3];
    int len=sizeof(teacher_arr)/sizeof(teacher_arr[0]);
    allocate_space(teacher_arr,len);
    print_info(teacher_arr,len);

    return 0;
}
