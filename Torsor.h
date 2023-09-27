#pragma once

#include <iostream>
#include <string>

#include "Vector.h"

template <typename T>
class Torsor3
{
    public :
    Torsor3(Vector3<T> Vector, Moment3<T> Moment) : Vector(Vector), Moment(Moment) {}
    Torsor3(Vector3<T> Vector, Moment3<T> Moment, Point3<T>& Point) : Vector(Vector), Moment(Moment), Point(Point) {}

    Vector3<T> GetForce() {return Vector;}
    Vector3<T> GetMoment() {return Moment;}
    Torsor3<T> CastToPoint(Point3<T> NewPoint) {
        return Torsor3<T>(Vector, Moment + ((Point-NewPoint) ^ Vector), NewPoint);
    }

    Torsor3<T> operator+(Torsor3<T> const& obj) //Operator Overload : Add two Torsor3.
    {
        return Torsor3<T>(
            Vector + obj.Vector,
            Moment + obj.Moment
        );
    }
    Torsor3<T> operator-(Torsor3<T> const& obj) //Operator Overload : Substract two Torsor3.
    {
        return Torsor3<T>(
            Vector - obj.Vector,
            Moment - obj.Moment
        );
    }
    Torsor3<T> operator%(Point3<T> const& obj)
    {
        return CastToPoint(obj);
    }

    bool operator==(Torsor3<T> const& obj)
    {
        return (Vector == obj.Vector && Moment == obj.Moment && Point == obj.Point);
    }

    private :

    Vector3<T> Vector;
    Moment3<T> Moment;
    Point3<T> Point;
};

