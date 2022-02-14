//#include <iostream>
//#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main_22()
{
    //the minimal three-digit number
    int three_digit_number=100;
    do
    {
        int hundred_place=three_digit_number/100;
        int ten_place=(three_digit_number%100)/10;
        int one_place=three_digit_number%10;
        if (pow(hundred_place,3)+pow(ten_place,3)+pow(one_place,3)==three_digit_number)
        {
            cout << hundred_place<<"^3+"<<ten_place<<"^3+"<<one_place<<"^3="<<three_digit_number << endl;
        }
            three_digit_number++;
    } while (three_digit_number<999);
    return 0;
}
