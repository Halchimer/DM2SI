# DM2SI
A C++ Vector Math library and more... I tried making it as clever and intuitive as possible.
You can report me any english mistake in the following text.

*Library developped to do my Engineering Science homeworks.*

# Documentation

## Vectors

There are 2 types of vectors : `Vector3` and `Vector2`.
The number associated with each type indicates how many "axis" it has.
Ex : `Vector3` has three values : X, Y and Z.

To create a vector, instanciate an objet of class Vector3 for exemple, specify the type of values it stores as well as the values themselves as follows:

`Vector3<float> MyVector(0.5f,9.3f,-2.7f);`

Providing no values at all will create a null vector.

You can **add and substract vectors as you would do with any type of value**.
Note : the **"*" operator** is used to calculate the **dot product** of two vectors, and the **"^"** operators is used to calculate the **vectorial product** of those two vectors.

**2nd Note : There are two alias for Vector3 and Vector2 each, which make Torsors more clear (see the next category), being : `Moment3`, `Point3` and `Moment2`, `Point2`.**

To get values of the vector you can use the `X()`, `Y()` and/or `Z()` methods. You can also redefine value by using this same methods but providing the new value as argument.

## Torsors

Torsors are ways to represent a force and a momentum at a specific point in one variable. It stores three values : **Vector**, **Moment** which are `Vector3`, and a `Point` which is a reference to a Vector3.
You can define a Torsor without providing a point but note that **the Point value will then be a null pointer (`nullptr`)** and **adding two torsors which are not at the same point is pointless**.

Defining a Torsor :

`
Point3<float> A(5.2f,4.3f,6.1f);
Torsor3<float> MyTorsor(
  Vector3<float>(0.2f,3.7f,6.1f),
  Moment3<float>(); // ---> Vector3<float>(),
  A
);
`

You can calculate the same torsor bu on another point by using either the methode `Torsor3<T>::CastToPoint(Point3<T> NewPoint)` or using the operator % as follows : `MyTorsor%NewPoint`. (This syntaxe is kinda unique to this library, it's not the mathematical syntaxe.)

# Complex Numbers

DM2SI provides a complex number implementation. You can create complexe numbers, and do all basic mathematical operations on them (+, -, *, /) as you would do with any number.
This library also allows you to directly print them in the console as you would do with any variable type.

Defining a Complex :

`Complex Z = 10 + 3 * i;`
`Complex Z(10,3)`

**Note that i is now defined as a constant, therefore you can't use the name i for your variable if you include `Complex.h` !**

You can get the real part and the imaginary part of a Complex like this : `Z.Re()` and `Z.Im()`
You can also get its conjugate : `Z.Conj()`

# Axis and Plan

There are enumeration class and structures for defining Axis and Plans but they don't serve any purpose for now...

# Alias and short cuts

You can include `Vector.h`, `Torsor.h`, `Axis.h` and `Atlas.h` by just including `DM2SI.h`.
(`Complex.h` needs to be included separatly)

`Alias.h` provides you with a shorter syntax for Vectors and Torsors, you just need in your c++ file to define `_USE_ALIAS` (`#define _USE_ALIAS`) before including the library.
You will then be able to type `Vector3F` instead of `Vector3<float>` (the letter F standing for "float") or `Torsor3I` (I standing for int).







