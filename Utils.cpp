#include "Utils.h"

template <typename T>
Vector3<T> Vector::VectorToPlan(Vector3<T> Vector, Plan<Axis3> Plan)
{
    Axis3[2] Axis = {Plan.H, Plan.V};

    Vector3<T> result();

    for(Axis3 A : Axis)
    {
        switch(A)
        {
            case Axis3::X :
                result.X(Vector.X());
                break;
            case Axis3::Y :
                result.Y(Vector.Y());
                break;
            case Axis3::Z :
                result.Z(Vector.Z());
                break;
        }
    }

    return result;
}