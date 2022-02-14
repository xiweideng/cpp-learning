#include <bits/stdc++.h>
using namespace std;
void test8()
{
    set<int> s;
    pair<set<int>::iterator,bool> res=s.insert(10);
    if (res.second)
    {
        cout << "Insertion success!" << endl;
    }
    else
    {
        cout << "Insertion failure!" << endl;
    }
    res=s.insert(10);
    if (res.second)
    {
        cout << "Insertion success!" << endl;
    }
    else
    {
        cout << "Insertion failure!" << endl;
    }
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    for (multiset<int>::iterator it=ms.begin();it!=ms.end() ;it++ )
    {
        cout << *it << " ";
    }
    cout   << endl;
}
int main_148()
{
    test8();
    return 0;
}
