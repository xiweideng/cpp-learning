#ifndef MYARRAY_HPP_INCLUDED
#define MYARRAY_HPP_INCLUDED

#include <bits/stdc++.h>
using namespace std;
template<typename T>
class MyArray
{
private:
    T * p;
    int capacity;
    int array_size;
public:
    MyArray(int capacity)
    {
//        cout << "MyArray(int capacity)" << endl;
        this->capacity=capacity;
        this->array_size=0;
        this->p=new T[this->capacity];
    }
    MyArray(const MyArray &arr)
    {
//        cout << "MyArray(const MyArray &arr)" << endl;
        this->capacity=arr.capacity;
        this->array_size=arr.array_size;
        this->p=new T[arr.capacity];
        for (int i=0; i<this->array_size; i++)
        {
            this->p[i]=arr.p[i];
        }
    }
    MyArray& operator=(const MyArray &arr)
    {
//        cout << "MyArray& operator=(const MyArray &arr)" << endl;
        if (this->p!=nullptr)
        {
            //free pointer
            delete[] this->p;
            //wild pointer
            this->p=nullptr;
            this->capacity=0;
            this->array_size=0;
        }
        this->capacity=arr.capacity;
        this->array_size=arr.array_size;
        this->p=new T[arr.capacity];
        for (int i=0; i<this->array_size; i++)
        {
            this->p[i]=arr.p[i];
        }
        return *this;
    }
    ~MyArray()
    {
//        cout << "~MyArray()" << endl;
        if (this->p!=nullptr)
        {
            //free pointer
            delete[] this->p;
            //wild pointer
            this->p=nullptr;
        }
    }
    void pushBack(const T &val)
    {
        if (this->capacity==this->array_size)
        {
            return;
        }
        this->p[this->array_size]=val;
        this->array_size++;
    }
    void popBack()
    {
        if (this->array_size==0)
        {
            return;
        }
        this->array_size--;
    }
    T& operator[](int index)
    {
        return this->p[index];
    }
    int getCapacity()
    {
        return this->capacity;
    }
    int getArraySize()
    {
        return this->array_size;
    }
};

#endif // MYARRAY_HPP_INCLUDED
