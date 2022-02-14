#include <bits/stdc++.h>
using namespace std;
void method27()
{
    stack<int> s;
    for (int i=0;i<10 ;i++ )
    {
        s.push(i*10);
    }
    cout << "The size of stack is " <<s.size()<< endl;
    while (!s.empty())
    {
        cout << "The top element of stack is " <<s.top()<< endl;
        s.pop();
    }
    cout << "The size of stack is " <<s.size()<< endl;
}
int main_135()
{
    method27();
    return 0;
}
