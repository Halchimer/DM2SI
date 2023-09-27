# DM2SI
A C++ Vector Math library and more... 

# Documentation

## Vectors

There are 2 types of vectors : `Vector3` and `Vector2`.
The number associated with each type indicates how many "axis" it has.
Ex : `Vector3` has three values : X, Y and Z.

To create a vector, instanciate an objet of class Vector3 for exemple, specify the type of values it stores as well as the values themselves as follows:

`Vector3<float> MyVector(0.5f,9.3f,-2.7f);`

You can **add and substract vectors as you would do with any type of value**.
Note : the **"*" operator** is used to calculate the **dot product** of two vectors, and the **"^"** operators is used to calculate the **vectorial product** of those two vectors.

**2nd Note : There are two alias for Vector3 and Vector2 each, which make Torsors more clear (see the next category), being : `Moment3`, `Point3` and `Moment2`, `Point2`.**

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








