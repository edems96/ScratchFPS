#include "BSPModel.h"

float *BSPModel::getMins() {
	return this->mins;
}

float *BSPModel::getMaxs() {
	return this->maxs;
}

int BSPModel::getFace() {
	return this->face;
}

int BSPModel::getFaces() {
	return this->n_faces;
}

int BSPModel::getBrush() {
	return this->brush;
}

int BSPModel::getBrushes() {
	return this->n_brushes;
}