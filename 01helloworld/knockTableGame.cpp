#include <bits/stdc++.h>
using namespace std;

int main_24()
{
    for (int i=1;i<101 ;i++ )
    {
        int ten_place=i/10;
        int one_place=i%10;
        int remainder=i%7;
        if (ten_place==7||one_place==7||remainder==0)
        {
            cout << "Knock the table!" << endl;

        }
        else
        {
            cout << i << endl;
        }

    }
    return 0;
}
