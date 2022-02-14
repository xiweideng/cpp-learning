#include <bits/stdc++.h>
using namespace std;

int main_48()
{
    //use pointers to access elements in an array.
    int arr[]={8,4,2,1,6,10,3,5,7,9};
    int * p=arr;
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len ;i++ )
    {
        cout << *p << endl;
        p++;
    }
    return 0;
}
