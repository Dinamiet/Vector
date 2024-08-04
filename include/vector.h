#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef struct _Vector_
{
	float X;
	float Y;
	float Z;
} Vector;

Vector Vector_Create(const float x, const float y, const float z);
Vector Vector_Scale(const Vector a, const float scale);
Vector Vector_Add(const Vector a, const Vector b);
Vector Vector_Subtract(const Vector a, const Vector b);
Vector Vector_Unit(const Vector a);
float  Vector_Dot(const Vector a, const Vector b);
float  Vector_Magnitude(const Vector a);
Vector Vector_Cross(const Vector a, const Vector b);
float  Vector_Angle(const Vector a, const Vector b);
Vector Vector_FromSpherical(const float theta, const float phi);
void   Vector_ToSpherical(const Vector a, float* theta, float* phi);

#endif
