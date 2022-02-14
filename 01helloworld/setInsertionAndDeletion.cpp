#include <bits/stdc++.h>
using namespace std;
void printIntSet2(const set<int> &s)
{
    for (set<int>::const_iterator it_begin=s.begin(); it_begin!=s.end() ; it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout <<   endl;
}
void test5()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(50);
    s1.insert(40);
    printIntSet2(s1);
    s1.erase(s1.begin());
    printIntSet2(s1);
    s1.erase(40);
    printIntSet2(s1);
    s1.erase(++s1.begin(),s1.end());
    printIntSet2(s1);
    s1.clear();
    printIntSet2(s1);
}
int main_146()
{
    test5();
    return 0;
}
