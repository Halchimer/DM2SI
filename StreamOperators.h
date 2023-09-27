#include "Vector.h"
#include "Torsor.h"

template<class T>
std::ostream& operator<<(std::ostream& os, Torsor3<T>& Torsor)
{
    os << "{\n" <<
    Torsor.GetForce().X() << ' ' << Torsor.GetForce().Y() << ' ' << Torsor.GetForce().Z() << '\n' <<
    Torsor.GetMoment().X() << ' ' << Torsor.GetMoment().Y() << ' ' << Torsor.GetMoment().Z() <<
    "\n}";

    return os;
}

template<class T>
std::ostream& operator<<(std::ostream& os, Vector3<T>& Vector)
{
    os << "( " << Vector.X() << ' ' << Vector.Y() << ' ' << Vector.Z() << " )";

    return os;
}