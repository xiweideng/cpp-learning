#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[8];
    bool sex;

};
int main_94()
{
    ofstream ofs("person.txt",ios::trunc|ios::binary);
    Person p={"jack",true};
    ofs.write((const char *)&p,sizeof(Person));
    return 0;
}
