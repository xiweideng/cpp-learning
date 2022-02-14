#include <bits/stdc++.h>
using namespace std;

int main_93()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if (!ifs.is_open())
    {
        cout << "Fail to open file!" << endl;
        return 1;
    }
//    char buffer[1024]={0};
//    while (ifs>>buffer)
//    {
//        cout << buffer;
//
//    }
//    char buffer[1024]={0};
//    while (ifs.getline(buffer,sizeof(buffer)))
//    {
//        cout << buffer;
//    }
    string buffer;
    while (getline(ifs,buffer))
    {
        cout << buffer<<endl;
    }
    ifs.close();
    return 0;
}
