#include <bits/stdc++.h>
using namespace std;
void method7()
{
    string str1="hello";
    //read
    for (int i=0; i<str1.length() ; i++ )
    {
        cout << str1[i];
    }
    cout << endl;
    for (int i=0; i<str1.length() ; i++ )
    {
        cout << str1.at(i);
    }
    cout << endl;
    //write
    cout << "str1="<<str1 << endl;
    str1[0]='x';
    cout << "str1="<<str1 << endl;
    str1.at(2)='x';
    cout << "str1="<<str1 << endl;
}
int main_118()
{
    method7();
    return 0;
}
