#include <bits/stdc++.h>
#include "point.h"
using namespace std;
class Circle
{
private:
    double radius;
    Point center;
public:
    void setRadius(double r)
    {
        radius=r;
    }
    double getRadius()
    {
        return radius;
    }
    void setCenter(Point p)
    {
        center=p;
    }
    Point getCenter()
    {
        return center;
    }
};
void isPointInCircle(Point p,Circle c)
{
    double distance=pow(p.getX()-c.getCenter().getX(),2)+pow(p.getY()-c.getCenter().getY(),2);
    double radius_sq=pow(c.getRadius(),2);
    if (distance > radius_sq)
    {
        cout << "Point outside the circle." << endl;
    }
    else if (distance<radius_sq)
    {
        cout << "Point in the circle." << endl;
    }
    else
    {
        cout << "Point on the circle." << endl;
    }

}
int main_77()
{
    Circle circle;
    circle.setRadius(10.0);
    Point center;
    center.setX(10.0);
    center.setY(0);
    circle.setCenter(center);
    Point p1;
    p1.setX(10.0);
    p1.setY(10.0);
    isPointInCircle(p1,circle);
    Point p2;
    p2.setX(20.0);
    p2.setY(10.0);
    isPointInCircle(p2,circle);
    Point p3;
    p3.setX(10.0);
    p3.setY(5.0);
    isPointInCircle(p3,circle);
    return 0;
}
