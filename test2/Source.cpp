#include <iostream>
#include "..\Test1\Vector3D.h"
using namespace std;
int main()
{
	float x, y, z;
	Vector3D one;
	one.Display();

	one = one.Init(1, 3, 4);
	one = one.Read();
	one.Display();

	Vector3D two;
	two = two.Init(5, 2, 6);
	two = two.Read();
	two.Display();
	Vector3D c = one.add(two);//c=one+two;
	c.Display();
	Vector3D d = one.subtraction(two);
	d.Display();
	Vector3D t = one.scalar(two);
	two = two.multialar();
	two.Display();
	two = two.comparisonvector();


}