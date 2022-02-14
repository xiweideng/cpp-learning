#include <bits/stdc++.h>
using namespace std;
void func_overlaod()
{
    cout << "func01" << endl;
}
void func_overlaod(int a )
{
    cout << "func02 int a" << endl;
}
void func_overlaod(double a )
{
    cout << "func02 double a" << endl;
}
void func_overlaod(int a,double b )
{
    cout << "func02 int a,double b" << endl;
}
void func_overlaod(double b,int a)
{
    cout << "func02 double b,int a" << endl;
}
//void func_overlaod(double b,int a)
//{
//    cout << "func02 double b,int a" << endl;
//}
int main_69()
{
//    func_overlaod();
//    func_overlaod(10);
//    func_overlaod(10.0);
    func_overlaod(10.0,10);
    func_overlaod(10,10.0);
    return 0;
}
