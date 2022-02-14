#include <bits/stdc++.h>
using namespace std;
//global variables
int global_a=5;
int global_b=9;
//global constant
const int const_global_a=4;
const int const_global_b=1;
int main_59()
{

    //local variables
    int local_a=10;
    int local_b=20;
    cout << "The memory address of local_a is "<<&local_a << endl;
    cout << "The memory address of local_b is "<<&local_b << endl;
    cout << "The memory address of global_a is "<<&global_a << endl;
    cout << "The memory address of global_b is "<<&global_b << endl;
    //static variable
    static int static_a=30;
    static int static_b=40;
    cout << "The memory address of static_a is "<<&static_a<< endl;
    cout << "The memory address of static_b is "<<&static_b<< endl;
    //string constant
    cout << "The memory address of string constant is "<<&"Hello" << endl;
    //global constant
    cout << "The memory address of global constant is " <<&const_global_a<< endl;
    cout << "The memory address of global constant is " <<&const_global_b<< endl;
    //local constant
    const int local_const_a=5;
    const int local_const_b=46;
    cout << "The memory address of local constant is " <<&local_const_a<< endl;
    cout << "The memory address of local constant is " <<&local_const_b<< endl;
    return 0;
}

