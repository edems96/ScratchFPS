#include "BSPBrush.h"

int BSPBrush::getBrushSide() {
	return this->brushside;
}

int BSPBrush::getBrushSides() {
	return this->n_brushes;
}

int BSPBrush::getTexture() {
	return this->texture;
}