#pragma once

#include "Vector.h"
#include "Torsor.h"
#include "Complex.h"

#ifdef _USE_ALIAS

using Vector3F = Vector3<float>;
using Vector3I = Vector3<int>;
using Vector3L = Vector3<long>;
using Vector3LD = Vector3<long double>;
using Vector3D = Vector3<double>;
using Vector3S = Vector3<short>;

using Vector2F = Vector2<float>;
using Vector2I = Vector2<int>;
using Vector2L = Vector2<long>;
using Vector2LD = Vector2<long double>;
using Vector2D = Vector2<double>;
using Vector2S = Vector2<short>;

using Torsor3F = Torsor3<float>;
using Torsor3I = Torsor3<int>;
using Torsor3L = Torsor3<long>;
using Torsor3LD = Torsor3<long double>;
using Torsor3D = Torsor3<double>;
using Torsor3S = Torsor3<short>;

using C = Complex;

#endif