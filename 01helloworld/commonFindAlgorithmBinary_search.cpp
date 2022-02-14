#include <bits/stdc++.h>
using namespace std;
void test29()
{
    set<int> s;
    for (int i=0;i<10 ;i++ )
    {
        int res=rand()%10;
        s.insert(res);
    }
    for (set<int>::iterator it=s.begin(); it!=s.end();it++ )
    {
        cout << *it << " ";
    }
    cout  << endl;
    bool isExist =binary_search(s.begin(),s.end(),3);
    if (isExist)
    {
        cout << "Exist" << endl;
    }
    else
    {
        cout << "Don't exist" << endl;
    }
}
int main_169()
{
    srand((unsigned int)time(nullptr));
    test29();
    return 0;
}
