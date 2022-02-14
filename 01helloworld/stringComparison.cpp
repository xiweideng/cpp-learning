#include <bits/stdc++.h>
using namespace std;
void method6()
{
    string str1="xello";
    string str2="hello";
    int res=str1.compare(str2);
    if (res==0)
    {
        cout << "str1==str2" << endl;
    }else if(res>0)
    {
        cout << "str1>str2" << endl;
    }else
    {
        cout << "str1<str2" << endl;
    }
}
int main_117()
{
    method6();
    return 0;
}
