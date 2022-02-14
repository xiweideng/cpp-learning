#include <bits/stdc++.h>
using namespace std;
class Cube
{
public:
    /**< implement setter and getter */
    void setLength(double len)
    {
        length=len;
    }
    double getLength()
    {
        return length;
    }
    void setWidth(double w)
    {
        width=w;
    }
    double getWidth()
    {
        return width;
    }
    void setHeight(double h)
    {
        height=h;
    }
    double getHeight()
    {
        return height;
    }
    double area()
    {
        return 2*(length*width+length*height+width*height);
    }
    double volume()
    {
        return length*width*height;
    }
    bool isSameByClass(Cube &cube)
    {
   return length==cube.getLength() && width==cube.getWidth() && height==cube.getHeight();
    }
private:
  double length;
  double width;
  double height;
};
bool isSame(Cube &cube1,Cube &cube2)
{
    return cube1.getLength()==cube2.getLength() && cube1.getWidth()==cube2.getWidth() && cube1.getHeight()==cube2.getHeight();
}
int main_76()
{
    Cube cube1;
    cube1.setLength(20.0);
    cube1.setWidth(15.0);
    cube1.setHeight(30.0);
    Cube cube2;
    cube2.setLength(20.0);
    cube2.setWidth(15.0);
    cube2.setHeight(30.0);
//    cout << "The surface area of cube1 is "<<cube.area() << endl;
//    cout << "The volume of cube1 is " <<cube.volume()<< endl;
    cout << isSame(cube1,cube2) << endl;
    cout << cube1.isSameByClass(cube2) << endl;
    return 0;
}
