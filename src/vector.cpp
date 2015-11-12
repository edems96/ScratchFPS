#include "vector.h"

Vector::Vector() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector::Vector(float x, float y) {
	this->x = x;
	this->y = y;
}

Vector::Vector(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector::Vector(const Vector *vector) {
	this->x = vector->x;
	this->y = vector->y;
	this->z = vector->z;
}
		
Vector *Vector::set(float x, float y) {
	this->x = x;
	this->y = y;
	
	return this;
}

Vector *Vector::set(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
	
	return this;
}

Vector *Vector::set(const Vector *vector) {
	this->x = vector->x;
	this->y = vector->y;
	this->z = vector->z;
	
	return this;
}

Vector *Vector::operator=(const Vector *vector) {
	this->x = vector->x;
	this->y = vector->y;
	this->z = vector->z;
	
	return this;
}

Vector Vector::operator+(const Vector *vector) {
	return Vector(this->x + vector->x, this->y + vector->y, this->z + vector->z);
}

Vector Vector::operator-(const Vector *vector) {
	return Vector(this->x - vector->x, this->y - vector->y, this->z - vector->z);
}

Vector Vector::operator*(float n) {
	return Vector(this->x * n, this->y * n, this->z * n);
}

Vector Vector::operator/(float n) { // should it crash??
	return n != 0 ? Vector(this->x / n, this->y / n, this->z / n) : Vector(this);
}
		
void Vector::operator+=(Vector vector) {
	this->x += vector.x;
	this->y += vector.z;
	this->z += vector.z;
}

void Vector::operator-=(Vector vector) {
	this->x -= vector.x;
	this->y -= vector.y;
	this->z -= vector.z;
}

void Vector::operator*=(float n) {
	this->x *= n;
	this->y *= n;
	this->z *= n;
}

void Vector::operator/=(float n) {
	if( n != 0 ) {
		this->x /= n;
		this->y /= n;
		this->z /= n;
	}
}
		
float Vector::length() {
	return sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
}

Vector *Vector::normalize() {
	float l = length();
	
	if( l != 0 ) {
		this->x /= l;
		this->y /= l;
		this->z /= l;
	}
	
	return this;
}

const char *Vector::toStr() {
	char * buffer;
	
	buffer = (char*)malloc(MAX_VECTOR_STR_LENTH);
	
	if( buffer == NULL )
		return NULL;
	
	int n = sprintf(buffer, "(%f, %f, %f)", x, y, z);

	return n > -1 ? buffer : NULL;
}