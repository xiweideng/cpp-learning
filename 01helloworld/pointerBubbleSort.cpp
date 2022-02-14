#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int * arr,int len)
{
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
}
int main_50()
{
    //declare an array.
    int arr1[]= {2,4,1,7,7,5,8,9,10,4,11,4,3,6,7};
    //compute the number of elements in the array.
    int len=sizeof(arr1)/sizeof(arr1[0]);
    bubble_sort(arr1,len);
    for (int i=0;i<len ;i++ )
    {
        cout << arr1[i] << endl;
    }
    return 0;
}
