#include <bits/stdc++.h>
using namespace std;
//define a constant PI
const double PI=3.1415926;
//design a class
class Circle
{
    //privileges
    public:
    //attributes
    double radius;
    //actions
    double calcu_perimeter()
    {
        return 2*PI*radius;
    }
};
int main_71()
{
    //instantiation
    Circle circle1;
    circle1.radius=2.0;
    cout <<circle1.calcu_perimeter()<<endl;
    return 0;
}
