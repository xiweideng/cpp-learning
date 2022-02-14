#include <bits/stdc++.h>
using namespace std;

int main_32()
{
    //the array of piglet weight
    int pig_arr[]={300,350,200,400,250};
    //suppose the first piglet is the heaviest.
    int heaviest=pig_arr[0];
    //find and print the heaviest piglet weight in the array
    for (int i=1;i<5 ;i++ )
    {
        int weight=pig_arr[i];
        if (weight>heaviest)
        {
            heaviest=weight;
        }
    }
    cout << heaviest << endl;
    return 0;
}
