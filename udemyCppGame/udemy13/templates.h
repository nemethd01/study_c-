//
// Created by Dominik on 2024. 12. 09..
//

#ifndef TEMPLATES_H
#define TEMPLATES_H
#pragma once

template<typename T>
class DynamicNumber
{
public:
    DynamicNumber() // default constructor
        : ptr{ new T{} }
    {

    };

    // one param constructor
    explicit DynamicNumber(const T& other)
        : ptr{ new T{other} }
    {

    }

    // big five
    ~DynamicNumber()
    {
        delete ptr;
    }

    // copy constructor - deep copy
    DynamicNumber(const DynamicNumber<T>& other)
        : ptr{ new T{ other.GetValue() } }
    {

    }

    // move con - shallow copy
    DynamicNumber(DynamicNumber&& other)
        : ptr{other.ptr} // transfer ownership of the pointer to this.
    {
        other.ptr = nullptr; // removes the ownership of the other.
    }

    // copy assignment operator
    DynamicNumber& operator=(const DynamicNumber<T>& other)
    {
        if (this == &other) return *this; // self assignment check

        *ptr = other.GetValue();
        return *this;
    }

    // move assignment operator
    DynamicNumber& operator=(DynamicNumber&& other)
    {
        if (*this == other) return *this;

        delete ptr;
        ptr = other.ptr;
        other.ptr = nullptr;
    }

    // == operator
    bool operator==(const DynamicNumber& other) const
    {
        if (ptr == other.ptr) return true;
        if (GetValue() == other.GetValue()) return true;

        return false;
    }

    T GetValue() const
    {
        return *ptr;
    }

private:
    T* ptr;
};

#endif //TEMPLATES_H
