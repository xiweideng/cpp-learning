#include <iostream>
using namespace std;

int main15()
{
    int a = 10;
    int b = 20;
    //not !
    cout << !a << endl;
    cout << !!a << endl;
    //and &&
    cout << (a&&b) << endl;
    //or ||
    b=0;
    cout << (a||b) << endl;

    return 0;
}
