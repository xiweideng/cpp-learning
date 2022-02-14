#include <bits/stdc++.h>
using namespace std;

int main_36()
{
    //declare a 2*3 2d array.
    int arr[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };
    //the memory size of the array.
    cout << "The memory size of the array is "<<sizeof(arr) <<" bytes."<< endl;
    //The memory size of each row of the array
    cout << "The memory size of each row of array is "<<sizeof(arr[0]) <<" bytes."<< endl;
    //The memory size of each element of the array
    cout << "The memory size of each element of array is "<<sizeof(arr[0][0]) <<" bytes."<< endl;
    //The number of rows of the array.
    cout << "The number of rows in the array is " <<sizeof(arr)/sizeof(arr[0]) << endl;
    //The number of columns of the array.
    cout << "The number of columns in the array is " <<sizeof(arr[0])/sizeof(arr[0][0]) << endl;
    //The number of elements of the array.
    cout << "The number of elements in the array is " <<sizeof(arr)/sizeof(arr[0][0]) << endl;
    //The first address of the array
    cout << "The first address of the array is " <<arr << endl;
    cout << "The address of the first row of the array is " <<&arr[0] << endl;
    cout << "The address of the second row of the array is " <<&arr[1] << endl;
    cout << "The address of the first element of the array is " <<&arr[0][0] << endl;
    cout << "The address of the fourth element of the array is " <<&arr[1][0] << endl;

    return 0;
}
