#include <bits/stdc++.h>
using namespace std;
void printIntDeque3(const deque<int>&d)
{
    for (deque<int>::const_iterator it_begin=d.begin();it_begin!=d.end() ;it_begin++ )
    {
        cout << *it_begin << " ";
    }
    cout<<endl;
}
void method22()
{
    deque<int> d1;
    //the tail interpolation
    d1.push_back(10);
    d1.push_back(20);
    //the head interpolation
    d1.push_front(100);
    d1.push_front(200);
    printIntDeque3(d1);
    d1.pop_back();
    printIntDeque3(d1);
    d1.pop_front();
    printIntDeque3(d1);
}
void method23()
{
    deque<int> d1;
    //the tail interpolation
    d1.push_back(10);
    d1.push_back(20);
    //the head interpolation
    d1.push_front(100);
    d1.push_front(200);
    printIntDeque3(d1);
    d1.insert(d1.begin(),1000);
    printIntDeque3(d1);
    d1.insert(d1.begin(),2,10000);
    printIntDeque3(d1);
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d1.insert(d1.begin(),d2.begin(),d2.end());
    printIntDeque3(d1);
}void method24()
{
    deque<int> d1;
    //the tail interpolation
    d1.push_back(10);
    d1.push_back(20);
    //the head interpolation
    d1.push_front(100);
    d1.push_front(200);
    printIntDeque3(d1);
    deque<int>::iterator it=d1.begin();
    it+=2;
    d1.erase(it);
    printIntDeque3(d1);
    d1.erase(++d1.begin(),--d1.end());
    printIntDeque3(d1);
    d1.clear();
    printIntDeque3(d1);

}
int main_131()
{
//    method22();
//    method23();
    method24();
    return 0;
}
