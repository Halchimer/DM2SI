#pragma once

#include <iostream>
#include <math.h>

#include "Axis.h"

template<class T> class Vector3;
template<class T> class Vector2;

// 3D Vector Class Template
template<class T>
class Vector3
{
    public :

    //functions using the template needs to be in declaration in order to work properly

    Vector3() : x(0), y(0), z(0) {}
    Vector3(T x,T y,T z) : x(x), y(y), z(z) {}

    Vector3<T> operator+(Vector3<T> const& obj) //Operator Overload : Add two Vector3.
    {
        return Vector3<T>(
            x+obj.x,
            y+obj.y,
            z+obj.z
        );
    }
    Vector3<T> operator-(Vector3<T> const& obj) //Operator Overload : Substract two Vector3.
    {
        return Vector3<T>(
            x-obj.x,
            y-obj.y,
            z-obj.z
        );
    }
    Vector3<T> operator^(Vector3<T> const& obj) //Operator Overload : Vector Product between two Vector3.
    {
        return Vector3<T>(
            y * obj.z - obj.y * z,
            z * obj.x - obj.z * x,
            x * obj.y - obj.x * y
        );
    }
    T operator*(Vector3<T> const& obj) //Operator Overload : Dot Product between two Vector3.
    {
        return (x * obj.x + y * obj.y + z * obj.z);
    }
    Vector3<T> operator*(Plan<Axis3> const& obj)
    {
        Vector3<T> Result(0,0,0);
        switch(obj.H)
        {
            case Axis3::X :
                Result.X(x);
                break;
            case Axis3::Y :
                Result.Y(y);
                break;
            case Axis3::Z :
                Result.Z(z);
                break;
            case Axis3::NULLAXIS :
                break;
        }
        switch(obj.V)
        {
            case Axis3::X :
                Result.X(x);
                break;
            case Axis3::Y :
                Result.Y(y);
                break;
            case Axis3::Z :
                Result.Z(z);
                break;
            case Axis3::NULLAXIS :
                break;
        }
        return Result;
    }
    bool operator==(Vector3<T> const& obj)
    {
        return (x == obj.x) && (y == obj.y) && (z == obj.z);
    }
    operator Vector2<T>() const
    {
        return Vector2<T>(x,y);
    }
    operator float() const
    {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }

    //Value Getters
    T X(){return x;}
    T Y(){return y;}
    T Z(){return z;}

    void X(T value){x = value;}
    void Y(T value){y = value;}
    void Z(T value){z = value;}


    private :
    T x;
    T y;
    T z;
};
template class Vector3<float>;
template class Vector3<int>;
template class Vector3<double>;
template class Vector3<short>;
template class Vector3<long>;
template class Vector3<long double>;

// 3D Vector Class Alias (for Clarity, to make code easier to understand)

template <typename T>
using Moment3 = Vector3<T>;

template <typename T>
using Point3 = Vector3<T>;

//Same structure but for 2D Vectors

template<class T>
class Vector2
{
    public :

    Vector2() : x(0), y(1) {}
    Vector2(T x,T y) : x(x), y(y) {}

    Vector2<T> operator+(Vector2<T> const& obj) //Operator Overload : Add two Vector3.
    {
        return Vector2<T>(
            x+obj.x,
            y+obj.y
        );
    }
    Vector2<T> operator-(Vector2<T> const& obj) //Operator Overload : Substract two Vector3.
    {
        return Vector2<T>(
            x-obj.x,
            y-obj.y
        );
    }
    T operator*(Vector2<T> const& obj) //Operator Overload : Dot Product between two Vector3.
    {
        return (x * obj.x + y * obj.y);
    }

    bool operator==(Vector2<T> const& obj)
    {
        return (x == obj.x) && (y == obj.y);
    }

    operator float() const
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
    operator Vector3<T>() const
    {
        return Vector3<T>(x,y,0);
    }

    //Value Getters
    T X(){return x;}
    T Y(){return y;}

    void X(T value){x = value;}
    void Y(T value){y = value;}

    private :
    T x;
    T y;

};
template class Vector2<float>;
template class Vector2<int>;
template class Vector2<double>;
template class Vector2<short>;
template class Vector2<long>;
template class Vector2<long double>;

template <typename T>
using Moment2 = Vector2<T>;

template <typename T>
using Point2 = Vector2<T>;


