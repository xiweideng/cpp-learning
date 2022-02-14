#include <bits/stdc++.h>
using namespace std;
class MapCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};
void printMap3(const map<int,int,MapCompare>&m)
{
    for (map<int,int,MapCompare>::const_iterator it=m.begin(); it!=m.end();it++ )
    {
        cout << "key="<<it->first<<" value=" <<it->second<< endl;
    }
}
void test17()
{
    map<int,int,MapCompare> m;
    m.insert(make_pair(2,20));
    m.insert(make_pair(1,10));
    m.insert(make_pair(3,30));
    m.insert(make_pair(5,50));
    m.insert(make_pair(4,40));
    printMap3(m);
}
int main_156()
{
    test17();
    return 0;
}
