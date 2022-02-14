#include <bits/stdc++.h>
using namespace std;

int main_34()
{
    //declare an array.
    int arr[]= {2,4,1,7,7,5,8,9,10,4,11,4,3,6,7};
    //compute the number of elements in the array.
    int len=sizeof(arr)/sizeof(arr[0]);
    //the ith epoch
    for (int i=0; i<len-1 ; i++ )
    {
        //the jth comparision
        for (int j=0; j<len-i-1 ; j++ )
        {
            int temp=arr[j];
            int next=arr[j+1];
            if (temp>next)
            {
                arr[j]=next;
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0; i<len ; i++ )
    {
        cout << arr[i] <<",";
    }
    return 0;
}
