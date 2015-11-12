#include "BSPLightvol.h"

unsigned char *BSPLightvol::getAmbient() {
	return this->ambient;
}

unsigned char *BSPLightvol::getDirectional() {
	return this->directional;
}

unsigned char *BSPLightvol::getDir() {
	return this->dir;
}