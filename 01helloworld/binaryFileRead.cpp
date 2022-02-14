#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[8];
    bool sex;

};
int main_95()
{
    ifstream ifs("person.txt",ios::in|ios::binary);
    if (!ifs.is_open())
    {
        cout << "Fail to open file!" << endl;
        return 1;
    }
    Person p;
    ifs.read((char *)&p,sizeof(p));
    cout << p.name << endl;
    cout << p.sex << endl;
    ifs.close();
    return 0;
}
