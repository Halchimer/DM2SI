#pragma once

// Axis enumerations used to define single axis, plans or volumes

enum class Axis3
{
    X,
    Y,
    Z,
    NULLAXIS
};

enum class Axis2
{
    X,
    Y,
    NULLAXIS
};
// Plans data structures forward declarations

template <typename T> struct Plan
{
    T H;
    T V;
}; // Plan Axis Data Structure

Axis3 NormalAxis(Plan<Axis3> Plan);
