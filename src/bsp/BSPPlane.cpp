#include "BSPPlane.h"

Vector BSPPlane::getNormal() {
	return this->normal;
}

float BSPPlane::getDistance() {
	return this->distance;
}