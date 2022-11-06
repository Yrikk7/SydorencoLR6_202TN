#include "Vector3D.h"
#include"pch.h"
#include <iostream>

using namespace std;
//using namespace Vector3D1;


Vector3D::Vector3D()
{
    x = 0;
    y = 0;
    z = 0;
}

Vector3D::Vector3D(float xx, float yy, float zz)
{
    x = xx;
    y = yy;
    z = zz;
}

Vector3D Vector3D::Init(float x, float y, float z)
{
    Vector3D tmp;
    tmp.x = x;
    tmp.y = y;
    tmp.z = z;
    return tmp;
}

Vector3D Vector3D::Read()
{
    Vector3D tmp;
    cout << "x:" << endl;
    cin >> tmp.x;
    cout << "y:" << endl;
    cin >> tmp.y;
    cout << "z:" << endl;
    cin >> tmp.z;
    return tmp;
}

Vector3D Vector3D::add(Vector3D v)
{
    Vector3D tmp;
    tmp.x = this->x + v.x;
    tmp.y = this->y + v.y;
    tmp.z = this->z + v.z;
    return tmp;
}

Vector3D Vector3D::subtraction(Vector3D s)
{
    Vector3D tmp;
    tmp.x = this->x - s.x;
    tmp.y = this->y - s.y;
    tmp.z = this->z - s.z;
    return tmp;
}

Vector3D Vector3D::scalar(Vector3D t)
{
    Vector3D tmp;
    tmp.x = this->x * t.x;
    tmp.y = this->y * t.y;
    tmp.z = this->z * t.z;
    double f = tmp.x + tmp.y + tmp.z;
    cout << "scalarny dobytok vectoriv  =" << f << endl;
    return tmp;
}

Vector3D Vector3D::multialar()
{
    Vector3D tmp;
    tmp.x = x * 2;
    tmp.y = y * 2;
    tmp.z = z * 2;
    return tmp;
}

Vector3D Vector3D::comparison()
{
    return Vector3D();
}

Vector3D Vector3D::comparisonvector()
{
    Vector3D tmp;
    tmp.x = pow(x, 2);
    tmp.y = pow(y, 2);
    tmp.z = pow(z, 2);
    double  d = pow(tmp.x + tmp.y + tmp.z, 0.5);
    cout << "modyl  =" << d << endl;
    return Vector3D();
}

float Vector3D::getX()
{
    return 0.0f;
}

float Vector3D::getY()
{
    return 0.0f;
}

float Vector3D::getZ()
{
    return 0.0f;
}

Vector3D Vector3D::comparingthelengthofs()
{
    return Vector3D();
}

void Vector3D::Display()
{
    cout << "x=" << x << ", " << "y=" << y << ";  " << "z=" << z << ";" << endl;
}
