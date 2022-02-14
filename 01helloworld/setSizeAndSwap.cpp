#include <bits/stdc++.h>
using namespace std;
void printIntSet1(const set<int> &s)
{
    for (set<int>::const_iterator it_begin=s.begin(); it_begin!=s.end() ; it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout <<   endl;
}
void test4()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    set<int> s2;
    s2.insert(100);
    s2.insert(300);
    s2.insert(200);
    s2.insert(400);
    printIntSet1(s1);
    printIntSet1(s2);
    cout << string(30,'*') << endl;
    s1.swap(s2);
    printIntSet1(s1);
    printIntSet1(s2);
    if (s1.empty())
    {
        cout << "set is empty!" << endl;
    }
    else
    {
        cout << "set isn't empty!" << endl;
        cout << "The size of set is "<<s1.size() << endl;
    }
}
int main_145()
{
    test4();
    return 0;
}
