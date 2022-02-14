#include <bits/stdc++.h>
using namespace std;
void method3()
{
    string str1="I ";
    str1+="love playing game";
    cout << "str1="<<str1 << endl;
    str1+=':';
    cout << "str1="<<str1 << endl;
    string str2="LOL and DNF";
    str1+=str2;
    cout << "str1="<<str1 << endl;
    string str3="You ";
    str3.append("love ");
    cout << "str3="<<str3 << endl;
    str3.append("game xyw",4);
    cout << "str3="<<str3 << endl;
    str3.append(str2,0,3);
    cout << "str3="<<str3 << endl;
}
int main_115()
{
    method3();
    return 0;
}
