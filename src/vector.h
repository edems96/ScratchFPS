#ifndef VECTOR_H
#define VECTOR_H

#include <cmath>
#include <cstdio>
#include <cstdlib>

#define MAX_VECTOR_STR_LENTH 30

class Vector {

	public:
		float x, y, z;
		
		Vector();
		Vector(float x, float y);
		Vector(float x, float y, float z);
		Vector(const Vector *vector);
		
		// ~Vector(); free x, y, z??
		
		Vector *set(float x, float y);
		Vector *set(float x, float y, float z);
		Vector *set(const Vector *vector);
		
		Vector *operator=(const Vector *vector);
		
		Vector operator+(const Vector *vector);
		Vector operator-(const Vector *vector);
		Vector operator*(float n);
		Vector operator/(float n);
		
		// Vector operator*(const Vector *vector); // cross product
		
		void operator+=(Vector vector);
		void operator-=(Vector vector);
		void operator*=(float n);
		void operator/=(float n);
		
		float length();
		Vector *normalize();
		const char *toStr();
		
		float dotProduct(const Vector *vector);
};

#endif