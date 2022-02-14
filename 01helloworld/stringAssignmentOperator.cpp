#include <bits/stdc++.h>
using namespace std;
void method2()
{
    string str1="Hello";
    cout << "str1="<<str1 << endl;
    string str2=str1;
    cout << "str2="<<str2 << endl;
    string str3;
    str3.assign("Hello Cpp");
    cout << "str3="<<str3 << endl;
    string str4;
    str4.assign("Hello Cpp",5);
    cout << "str4="<<str4 << endl;
    string str5;
    str5.assign(str4);
    cout << "str5="<<str5 << endl;
    string str6;
    str6.assign(10,'a');
    cout << "str6="<<str6 << endl;


}
int main_114()
{
    method2();
    return 0;
}
