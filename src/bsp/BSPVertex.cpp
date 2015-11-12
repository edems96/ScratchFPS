#include "BSPVertex.h"

Vector BSPVertex::getPosition() {
	return this->position;
}

TextureCoordinateST BSPVertex::getSurface() {
	return this->surface;
}

TextureCoordinateST BSPVertex::getLightmap() {
	return this->lightmap;
}
		
Vector BSPVertex::getNormal() {
	return this->normal;
}

unsigned char *BSPVertex::getColor() {
	return this->color;
}