#include <bits/stdc++.h>
using namespace std;
void method4()
{
    string str1="abcdefgde";
    int pos=str1.find("de");
    cout << "pos="<<pos << endl;
    pos=str1.rfind("de");
    cout << "pos="<<pos << endl;
}
void method5()
{
    string str1="abcdefgde";
    str1.replace(0,2,"hello");
    cout << "str1="<<str1 << endl;
}
int main_116()
{
//    method4();
    method5();
    return 0;
}
