#include <iostream>
using namespace std;

int main5()
{
    // define a short integer variable,-2^15~2^15-1
    short num1=32769;
    // define a int integer variable,-2^31~2^31-1
    int num2=32768;
    // define a long integer variable,-2^63~2^63-1
    long num3=10;
    // define a long long integer variable,-2^63~2^63-1
    long long num4=10;
    cout << "num1=" << sizeof(short) << endl;
    cout << "num2=" << sizeof(num2) << endl;
    cout << "num3=" << sizeof(num3) << endl;
    cout << "num4=" << sizeof(long long) << endl;
    return 0;
}
