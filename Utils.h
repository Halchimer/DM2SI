#pragma once

#include "Vector.h"
#include "Axis.h"

/*
            Alias for faster writing
*/

namespace Vector
{

    //Constants
    const Vector3<float> NullVector3F();
    const Vector3<int> NullVector3I();
    const Vector3<double> NullVector3D();
    const Vector2<float> NullVector2F();
    const Vector2<int> NullVector2I();
    const Vector2<double> NullVector2D();

    const Vector3<int*> NullPointerVector3(NULL, NULL, NULL);
    const Vector2<int*> NullPointerVector2(NULL, NULL);

    //Utils Vectors Functions
    template <typename T>
    Vector3<T> VectorToPlan(Vector3<T> Vector, Plan<Axis3> Plan);
    
}
