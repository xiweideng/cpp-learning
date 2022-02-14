#include <bits/stdc++.h>
using namespace std;
void printIntSet(const set<int> &s)
{
    for (set<int>::const_iterator it_begin=s.begin(); it_begin!=s.end() ; it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout <<   endl;
}
void test3(int rand_num=10)
{
    set<int> s1;
    for (int i=0; i<rand_num ; i++ )
    {
        int elem=rand()%10;
        s1.insert(elem);
    }
    printIntSet(s1);
    set<int> s2=s1;
    printIntSet(s2);
}
int main_144()
{
    srand((unsigned int)time(nullptr));
    test3();
    return 0;
}
