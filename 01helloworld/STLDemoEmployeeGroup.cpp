#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string name,int salary)
    {
        this->name=name;
        this->salary=salary;
    }
};
void printEmployee(const vector<Employee>&v)
{
    for (vector<Employee>::const_iterator it=v.begin(); it!=v.end() ; it++ )
    {
        cout << "Name:"<<it->name<<"\tSalary:"<<it->salary << endl;
    }
}
void createEmployee(vector<Employee>&v,int employee_num=10)
{
    for (int i=0; i<employee_num ; i++ )
    {
        string name="Employee ";
        name+=(65+i);
        int salary=rand()%10000+10000;
        v.push_back(Employee(name,salary));
    }
}
void group(vector<Employee>&v,multimap<string,Employee>&m,string str_arr[])
{
    for (vector<Employee>::iterator it=v.begin(); it!=v.end() ; it++ )
    {
        int dept=rand()%3;
        m.insert(make_pair(str_arr[dept],*it));
    }
}
void showEmployeeByGroup(const multimap<string,Employee>&m,string str_arr[])
{
    for (int i=0; i<3 ; i++ )
    {
        string dept=str_arr[i];
        cout << dept << endl;
        int len=m.count(dept);
        int j=0;
        for (multimap<string,Employee>::const_iterator it=m.find(dept); j<len ; it++,j++ )
        {
            cout << "Name:"<<it->second.name<<"\tSalary:"<<it->second.salary << endl;
        }
    }
}
int main_157()
{
    srand((unsigned int)time(nullptr));
    vector<Employee> v;
    multimap<string,Employee>m;
    string str_arr[]= {"Schema","Arts","Research&Development"};
    createEmployee(v);
    printEmployee(v);
    group(v,m,str_arr);
    showEmployeeByGroup(m,str_arr);
//    cout << str_arr[1] << endl;
    return 0;
}
