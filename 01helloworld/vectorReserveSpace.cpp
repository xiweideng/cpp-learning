#include <bits/stdc++.h>
using namespace std;
void method18()
{
    vector<int> v1;
    v1.reserve(100000);
    int num=0;
    int *p;
    for (int i=0;i<100000 ;i++ )
    {
        v1.push_back(i);
        if (p!=&v1[0])
        {
            p=&v1[0];
            num++;
        }
    }
    cout << num << endl;
}
int main_127()
{
    method18();
    return 0;
}
