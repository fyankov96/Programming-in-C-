#include "MyVector.h"

#include <iostream>

// The constructor
MyVector::MyVector(void)
{
    capacity = 1;
    vsize = 0;

    content = new int[capacity];
    return;
}

// The constructor
MyVector::MyVector(int initialCapacity)
{
    capacity = initialCapacity;
    vsize = 0;
    content = new int[capacity];
    return;
}

// Destructor method
MyVector::~MyVector(void)
{
    delete[] content;
    return;
}

void MyVector::resize()
{
    int *old_content = content;

    capacity = capacity * 2;
    content = new int[capacity];

        for(unsigned int i = 0; i < vsize; i++)
    {
        content[i] = old_content[i];
    }

    delete[] old_content;
}

unsigned int MyVector::size(void)
{
    return vsize;
}

void MyVector::push_back(int x)
{
    if (this->vsize == this->capacity)
    {
        resize();
    }

    content[vsize] = x;
    vsize++;
}

int MyVector::at(unsigned int i)
{
    if (i >= vsize)
    {
        throw std::out_of_range("Access out of range");
    }
    return content[i];
}

// Here we overload the operator [_] to access MyVector elements in array-style
int &MyVector::operator[](unsigned int i)
{
    if (i >= vsize)
    {
        throw std::out_of_range("Access out of range");
    }
    return content[i];
}

// Our custom assignment operator, needed to handle dynamic allocations
MyVector &MyVector::operator=(MyVector &v)
{
    // The next 3 lines show what the default assignment operator = would do
    this->capacity = v.capacity;
    this->vsize = v.vsize;
    // this->content = v.content;

    delete[] this->content;

    this->content = new int[this->capacity];

    for (unsigned int i = 0; i < vsize; i++)
    {
        this->content[i] = v.content[i];
    }

    return *this;
}
