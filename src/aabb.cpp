#include "aabb.h"

AABB::AABB(Vector origin, float size) {
	this->origin 	= origin;
	this->size 		= size;
}

Vector AABB::getOrigin() {
	return this->origin;
}

float AABB::getSize() {
	return this->size;
}