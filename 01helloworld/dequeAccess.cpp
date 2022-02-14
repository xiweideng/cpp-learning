#include <bits/stdc++.h>
using namespace std;
void method25()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(100);
    d1.push_back(200);
    d1.push_back(300);
    for (int i=0;i<d1.size() ;i++ )
    {
        cout << d1[i] << " ";
    }
    cout<< endl;
    for (int i=0;i<d1.size() ;i++ )
    {
        cout << d1.at(i) << " ";
    }
    cout<< endl;
    cout << "The first element of deque is "<<d1.front() << endl;
    cout << "The last element of deque is "<<d1.back() << endl;
}
int main_132()
{
    method25();
    return 0;
}
