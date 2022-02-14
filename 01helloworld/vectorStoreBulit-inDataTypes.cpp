#include <bits/stdc++.h>
using namespace std;
void traverse(int val)
{
    cout << val+10 << endl;
}
int main_110()
{
    vector<int> v;
    for (int i=0;i<10;i++){
        v.push_back(i*10);
    }
//    //traversal 1
//    //declare two iterators
//    vector<int>::iterator iter_begin=v.begin();
//    vector<int>::iterator iter_end=v.end();
//    while (iter_begin!=iter_end)
//    {
//        cout << *iter_begin << endl;
//        iter_begin++;
//    }
//    //traversal 2
//    for (vector<int>::iterator it_begin=v.begin();it_begin!=v.end() ;it_begin++ )
//    {
//        cout << *it_begin << endl;
//    }
    //traversal 3
    for_each(v.begin(),v.end(),traverse);
    return 0;
}
