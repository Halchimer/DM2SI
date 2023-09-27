#include "Axis.h"

//////////////////////////////////////////////////////////////////////////////

Axis3 NormalAxis(Plan<Axis3> Plan)
{
    if(Plan.H != Plan.V) {
        return Axis3(3 - (int(Plan.H) + int(Plan.V)));
    }
    else {
        return Axis3::NULLAXIS;
    }
}