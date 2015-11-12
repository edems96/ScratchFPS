#include "BSPLeaf.h"

int BSPLeaf::getCluster() {
	return this->cluster;
}

int BSPLeaf::getArea() {
	return this->area;
}

int *BSPLeaf::getMins() {
	return this->mins;
}

int *BSPLeaf::getMaxs() {
	return this->maxs;
}

int BSPLeaf::getLeafFace() {
	return this->leafface;
}

int BSPLeaf::getLeafFaces() {
	return this->n_leaffaces;
}

int BSPLeaf::getLeafBrush() {
	return this->leafbrush;
}

int BSPLeaf::getLeafBrushes() {
	return this->n_leafbrushes;
}