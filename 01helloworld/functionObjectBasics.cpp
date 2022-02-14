#include <bits/stdc++.h>
using namespace std;
class MyAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1+v2;
    }
};
class Print
{
public:
    int invoke_count;
    Print()
    {
        this->invoke_count=0;
    }
    void operator()(string str)
    {
        cout << str << endl;
        this->invoke_count++;
    }
};
void testPrint(Print &p,string str)
{
    p(str);
}
int main_158()
{
    MyAdd myAdd;
    int res=myAdd(10,20);
    cout << res << endl;
    Print print;
    print("Hello");
    print("Hello");
    print("Hello");
    print("Hello");
    cout << print.invoke_count << endl;
    Print p1;
    testPrint(p1,"Hello Cpp!");
    return 0;
}
