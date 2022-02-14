#include <bits/stdc++.h>
#include "MyArray.hpp"
using namespace std;
void printIntArray(MyArray<int> & arr)
{
    for (int i=0; i<arr.getArraySize(); i++)
    {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}
class Person
{
public:
    string name;
    int age;
    Person()
    {

    }
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
void printPersonArray(MyArray<Person> &arr)
{
    for (int i=0;i<arr.getArraySize() ;i++ )
    {
        cout << "Name:"<<arr[i].name;
        cout << " Age:"<<arr[i].age << endl;
    }
}
int main_109()
{
    MyArray<int> arr(5);
    for (int i=0; i<5; i++)
    {
        arr.pushBack(i+1);
    }
    printIntArray(arr);
    cout << "The capacity of arr is "<<arr.getCapacity() << endl;
    cout << "The size of arr is "<<arr.getArraySize() << endl;
    MyArray<int> arr1(arr);
    printIntArray(arr1);
    arr1.popBack();
    printIntArray(arr1);
    cout << "The capacity of arr1 is "<<arr1.getCapacity() << endl;
    cout << "The size of arr1 is "<<arr1.getArraySize() << endl;

    MyArray<Person> arr2(10);
    Person p1("Jack",20);
    Person p2("Jerry",16);
    Person p3("Mary",17);
    Person p4("Linda",24);
    Person p5("Lucy",19);
    arr2.pushBack(p1);
    arr2.pushBack(p2);
    arr2.pushBack(p3);
    arr2.pushBack(p4);
    arr2.pushBack(p5);
    printPersonArray(arr2);
    cout << "The capacity of arr2 is "<<arr2.getCapacity() << endl;
    cout << "The size of arr2 is "<<arr2.getArraySize() << endl;
    return 0;
}
