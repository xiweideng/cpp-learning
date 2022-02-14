#include <bits/stdc++.h>
using namespace std;
void printIntList3(const list<int>&l)
{
    for (list<int>::const_iterator it_begin=l.begin(); it_begin!=l.end() ; it_begin++ )
    {
        cout << *it_begin <<" ";
    }
    cout   << endl;
}
void method33()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(100);
    l.push_front(200);
    l.push_front(300);
    printIntList3(l);
    l.pop_back();
    printIntList3(l);
    l.pop_front();
    printIntList3(l);
    l.insert(++l.begin(),1000);
    printIntList3(l);
    l.erase(l.begin());
    printIntList3(l);
    l.push_back(22);
    l.push_back(22);
    printIntList3(l);
    l.remove(22);
    printIntList3(l);
    l.clear();
    printIntList3(l);
}
int main_140()
{
    method33();
    return 0;
}
