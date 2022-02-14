#include <bits/stdc++.h>
using namespace std;

int main_33()
{
    //declare an array of five elements.
    int arr[]={1,2,3,4,5};
    for (int i=0;i<5 ;i++ )
    {
        cout << arr[i];
    }
    cout << endl;
    //invert the elements of the array.
    for (int i=0;i<2 ;i++ )
    {
        int temp=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=temp;
    }
    for (int i=0;i<5 ;i++ )
    {
        cout << arr[i];
    }
    return 0;
}
