#include <bits/stdc++.h>
using namespace std;

struct Student1
{
    string name;
    int age;
    int score;
};
int main_52()
{
    //create struct array.
    Student1 stuArray[]=
    {
        {"zs",20,95},
        {"ls",18,88},
        {"ww",17,100}
    };
    //modify
    stuArray[1].name="ws";
    stuArray[1].age=10;
    stuArray[1].score=85;
    for (int i=0;i<3 ;i++ )
    {
        cout << stuArray[i].name << endl;
        cout << stuArray[i].age << endl;
        cout << stuArray[i].score << endl;
    }
    return 0;
}
