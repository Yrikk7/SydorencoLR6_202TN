#pragma once
// Vector3D.h
#ifdef VECTOR3D_EXPORTS
#define VECTOR3D_API __declspec(dllexport)
#else
#define VECTOR3D_API __declspec(dllimport)
#endif

class VECTOR3D_API Vector3D
{	
public:
	Vector3D();
	Vector3D(float xx, float yy, float zz);
	Vector3D Init(float x, float y, float z);
	Vector3D Read();
	Vector3D add(Vector3D v);//додавання век торів
	Vector3D subtraction(Vector3D s);// Віднімання векторів
	Vector3D scalar(Vector3D t);// скалярний добуток векторів
	Vector3D multialar();// множення на скаляр
	Vector3D comparison();// порівняння векторів
	Vector3D comparisonvector();// обчислення довжини вектора
	Vector3D comparingthelengthofs();// порівняння довжини векторів
	void Display();
	float getX();
	float getY();
	float getZ();


	//private:
	float x, y, z;

};
