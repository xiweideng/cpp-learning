#include <bits/stdc++.h>
using namespace std;
void printIntList1(const list<int>&l)
{
    for (list<int>::const_iterator it_begin=l.begin(); it_begin!=l.end() ; it_begin++ )
    {
        cout << *it_begin <<" ";
    }
    cout   << endl;
}
void method30()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    printIntList1(l);
    list<int> l1=l;
    printIntList1(l1);
    list<int> l2;
    l2.assign(l1.begin(),l1.end());
    printIntList1(l2);
    list<int> l3;
    l3.assign(10,100);
    printIntList1(l3);

}
void method31()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    list<int> l1;
    l1.assign(10,100);
    cout << "Before" << endl;
    printIntList1(l);
    printIntList1(l1);
    l.swap(l1);
    cout << "After" << endl;
    printIntList1(l);
    printIntList1(l1);
}
int main_138()
{
//    method30();
    method31();
    return 0;
}
