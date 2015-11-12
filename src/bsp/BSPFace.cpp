#include "BSPFace.h"

int BSPFace::getTexture() {
	return this->texture;
}

int BSPFace::getEffect() {
	return this->effect;
}

int BSPFace::getType() {
	return this->type;
}

int BSPFace::getVertex() {
	return this->vertex;
}

int BSPFace::getVertices() {
	return this->n_vertexes;
}

int BSPFace::getMeshvert() {
	return this->meshvert;
}

int BSPFace::getMeshverts() {
	return this->n_meshverts;
}

int BSPFace::getLightMapIndex() {
	return this->lm_index;
}

int *BSPFace::getLightMapStart() {
	return this->lm_start;
}

int *BSPFace::getLightMapSize() {
	return this->lm_size;
}

Vector BSPFace::getLightMapOrigin() {
	return this->lm_origin;
}

Vector *BSPFace::getLightMapVecs() {
	return this->lm_vecs;
}

Vector BSPFace::getNormal() {
	return this->normal;
}

int *BSPFace::getSize() {
	return this->size;
}