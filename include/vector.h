#ifndef _VECTOR_H_
#define _VECTOR_H_

/**
 * \file
 * Vector
 *
 * 3D Vector library
 */

/**
 * Vector structure
 */
typedef struct _Vector_
{
	float X; /** Vector X component */
	float Y; /** Vector Y component */
	float Z; /** Vector Z component */
} Vector;

/**
 * Create a new vector
 * \param x Vector X component
 * \param y Vector Y component
 * \param z Vector Z component
 * \return New Vector
 */
Vector Vector_Create(const float x, const float y, const float z);

/**
 * Scale Vector A by the scaling factor scale
 * \param a Vector to scale A
 * \param scale The scaling factor
 * \return New scaled vector
 */
Vector Vector_Scale(const Vector a, const float scale);

/**
 * Add A and B together
 * \param a Vector A
 * \param b Vector B
 * \return Sum of A and B
 */
Vector Vector_Add(const Vector a, const Vector b);

/**
 * Subtract B from A, that is A - B
 * \param a Vector A
 * \param b Vector B
 * \return Difference between A and B
 */
Vector Vector_Subtract(const Vector a, const Vector b);

/**
 * Create a unit Vector from A
 * \param a Vector A
 * \return Unit vector
 */
Vector Vector_Unit(const Vector a);

/**
 * Dot product of A and B
 * \param a Vector A
 * \param b Vector B
 * \return Dot product of A and B, A * B
 */
float Vector_Dot(const Vector a, const Vector b);

/**
 * Magnitude of vector A
 * \param a Vector A
 * \return Maginitude or Size of A
 */
float Vector_Magnitude(const Vector a);

/**
 * Cross product of A and B
 * \param a Vector A
 * \param b Vector B
 * \return Cross product of A and B, A x B
 */
Vector Vector_Cross(const Vector a, const Vector b);

/**
 * Angle between two vectors
 * \param a Vector A
 * \param b Vector B
 * \return Angle between A and B
 */
float Vector_Angle(const Vector a, const Vector b);

/**
 * Create a unit vector from spherical coordinates
 * \param theta Angle from the positive Z-axis (Polar angle)
 * \param phi Angle from the positive X-axis (Azimuth angle)
 * \return Unit vector from spherical coordinates
 */
Vector Vector_FromSpherical(const float theta, const float phi);

/**
 * Unit vector to spherical coordinates
 * \param a Vector to convert
 * \param theta Spherical angle from the positive Z-axis (Polar angle)
 * \param phi Spherical angle from the positive X-axis (Azimuth angle)
 */
void Vector_ToSpherical(const Vector a, float* theta, float* phi);

#endif
