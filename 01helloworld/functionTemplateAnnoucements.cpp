#include <bits/stdc++.h>
using namespace std;
//declare a template,generic programming
template<class T>
void my_swap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
template<typename T>
void func()
{
    cout << "func" << endl;
}
int main_97()
{
    func<int>();
    return 0;
}
