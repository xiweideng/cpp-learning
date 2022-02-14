#include <bits/stdc++.h>
using namespace std;
template<typename T>
void my_swap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
template<typename T>
void select_sort(T *arr,int len)
{
    for (int i=0;i<len ;i++ )
    {
        T cur=arr[i];
        for (int j=i+1;j<len ;j++ )
        {
            if (arr[j]>cur)
            {
                my_swap(cur,arr[j]);
            }
        }
        arr[i]=cur;
    }
}
int main_98()
{
    char arr1[]="ghjtsaklwinsj";
    int arr2[]={5,1,3,7,4,6,9,5,0,8,3,4};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    select_sort(arr1,len);
    for (int i=0;i<len ;i++ )
    {
        cout << arr1[i] << endl;
    }
    len=sizeof(arr2)/sizeof(arr2[0]);
    select_sort(arr2,len);
    for (int i=0;i<len ;i++ )
    {
        cout << arr2[i] << endl;
    }
    return 0;
}
