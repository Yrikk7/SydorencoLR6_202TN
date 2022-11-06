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
	Vector3D add(Vector3D v);//��������� ��� ����
	Vector3D subtraction(Vector3D s);// ³������� �������
	Vector3D scalar(Vector3D t);// ��������� ������� �������
	Vector3D multialar();// �������� �� ������
	Vector3D comparison();// ��������� �������
	Vector3D comparisonvector();// ���������� ������� �������
	Vector3D comparingthelengthofs();// ��������� ������� �������
	void Display();
	float getX();
	float getY();
	float getZ();


	//private:
	float x, y, z;

};
