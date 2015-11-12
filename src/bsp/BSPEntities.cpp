#include "BSPEntities.h"

BSPEntities::BSPEntities(unsigned int size) {
	this->ents = (char *) malloc(sizeof(char) * this->size);
}

BSPEntities::~BSPEntities() {
	free(this->ents);
}

bool BSPEntities::Read(FILE *f, int offset) {
	if( fseek(f, SEEK_SET, offset) )
		return false;
	
	return fread(this->ents, sizeof(char), this->size, f) == this->size;
}