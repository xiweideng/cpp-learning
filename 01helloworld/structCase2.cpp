#include <bits/stdc++.h>
using namespace std;

struct Hero
{
    string name;
    int age;
    string sex;
};
void bubble_sort(struct Hero  hero_arr[],int len)
{
    for (int i=0; i<len-1 ; i++ )
    {
        //the jth comparision
        for (int j=0; j<len-i-1 ; j++ )
        {
            struct Hero temp=hero_arr[j];
            struct Hero next=hero_arr[j+1];
            if (temp.age>next.age)
            {
                hero_arr[j]=next;
                hero_arr[j+1]=temp;
            }
        }
    }
}
int main_58()
{
    struct Hero hero_arr[]=
    {
        {"Li Bei",23,"male"},
        {"Guan Yu",21,"male"},
        {"Zhang Fei",22,"male"},
        {"Zhao Yun",24,"male"},
        {"Diao Chan",19,"female"}
    };
    int len=sizeof(hero_arr)/sizeof(hero_arr[0]);
    for (int i=0;i<len ;i++ )
    {
        cout << "Name:" <<hero_arr[i].name
        <<"Age:"<<hero_arr[i].age<< endl;
    }
    cout  << endl;
    bubble_sort(hero_arr,len);
    for (int i=0;i<len ;i++ )
    {
        cout << "Name:" <<hero_arr[i].name
        <<"Age:"<<hero_arr[i].age<< endl;
    }
    return 0;
}
