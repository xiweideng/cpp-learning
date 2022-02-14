#include <bits/stdc++.h>
using namespace std;
void method9()
{
    string str1="I love you!";
    cout << "str1="<<str1 << endl;
    string subString=str1.substr(2,4);
    cout << "subString="<<subString << endl;
}
void method10()
{
    string email="yuanyuanjia@qq.com";
    string username=email.substr(0,email.find('@'));
    cout << "username="<< username<< endl;
}
int main_120()
{
//    method9();
    method10();
    return 0;
}
