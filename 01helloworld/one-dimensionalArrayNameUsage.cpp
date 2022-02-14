#include <bits/stdc++.h>
using namespace std;

int main_31()
{
    int arr[]= {10,20,30,40,50};
    //the memory size of the array.
    cout << "The memory size of the array is "<<sizeof(arr) <<" bytes."<< endl;
    //The memory size of each element of the array
    cout << "The memory size of each element of array is "<<sizeof(arr[0]) <<" bytes."<< endl;
    //The number of elements of the array.
    cout << "The number of elements in the array is " <<sizeof(arr)/sizeof(arr[0]) << endl;
    //The first address of the array
    cout << "The first address of the array is " <<arr << endl;
    cout << "The address of the first element of the array is " <<&arr[0] << endl;
    cout << "The address of the second element of the array is " <<&arr[1] << endl;
    //The name of array is a constant and cannot be reassigned.
    //arr=20;
    return 0;
}
