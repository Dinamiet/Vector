#include "vector.h"

#include <math.h>

Vector Vector_Create(const float x, const float y, const float z)
{
	Vector v;

	v.X = x;
	v.Y = y;
	v.Z = z;

	return v;
}

Vector Vector_Scale(const Vector a, const float scale)
{
	Vector v;

	v.X = a.X * scale;
	v.Y = a.Y * scale;
	v.Z = a.Z * scale;

	return v;
}

Vector Vector_Add(const Vector a, const Vector b)
{
	Vector v;

	v.X = a.X + b.X;
	v.Y = a.Y + b.Y;
	v.Z = a.Z + b.Z;

	return v;
}

Vector Vector_Subtract(const Vector a, const Vector b)
{
	Vector v;

	v.X = a.X - b.X;
	v.Y = a.Y - b.Y;
	v.Z = a.Z - b.Z;

	return v;
}

Vector Vector_Unit(const Vector a)
{
	float mag = Vector_Magnitude(a);
	return Vector_Scale(a, 1.0f / mag);
}

float Vector_Dot(const Vector a, const Vector b) { return (a.X * b.X) + (a.Y * b.Y) + (a.Z * b.Z); }

float Vector_Magnitude(const Vector a)
{
	float dot = Vector_Dot(a, a);
	return sqrtf(dot);
}

Vector Vector_Cross(const Vector a, const Vector b)
{
	Vector v;

	v.X = a.Y * b.Z - b.Y * a.Z;
	v.Y = b.X * a.Z - a.X * b.Z;
	v.Z = a.X * b.Y - b.X * a.Y;

	return v;
}

float Vector_Angle(const Vector a, const Vector b)
{
	float dot = Vector_Dot(a, b);
	float mag = Vector_Magnitude(a) * Vector_Magnitude(b);

	float frac = dot / mag;
	if (fabsf(frac) >= 1)
		return 0;

	return acosf(frac);
}

Vector Vector_FromSpherical(const float theta, const float phi)
{
	Vector v;

	float plane = sinf(theta);

	v.X = cosf(phi) * plane;
	v.Y = sinf(phi) * plane;
	v.Z = cosf(theta);

	return v;
}

void Vector_ToSpherical(const Vector a, float* theta, float* phi)
{
	*phi   = atan2f(a.Y, a.X);
	*theta = acosf(a.Z);
}
