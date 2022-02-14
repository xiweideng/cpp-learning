#include <bits/stdc++.h>
using namespace std;

int main_26()
{
    //print multiplication table on the screen.
    // row index
    for (int i=1; i<10 ; i++ )
    {
        for (int j=1; j<=i ; j++ )
        {
            cout << j<<"*" <<i<<"="<< i*j<<"\t";
        }
        cout <<endl;
    }

    return 0;
}
