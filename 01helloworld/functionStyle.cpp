#include <bits/stdc++.h>
using namespace std;
//no param and no retVal
void test01()
{
    cout << "This is test01 !" << endl;
}
//exist param and no retVal
void test02(int a)
{
    cout << "This is test02 and a=" <<a<< endl;
}
//no param and exist retVal
int test03()
{
    cout << "This is test03!" << endl;
    return 666;
}
//exist param and exist retVal
int test04(int a)
{
    cout << "This is test04!" << endl;
    return a;
}
int main_40()
{
    test01();
    test02(12);
    int res=test03();
    cout << "res=" <<res<< endl;
    int ans=test04(333);
    cout << "ans="<<ans << endl;
    return 0;
}
