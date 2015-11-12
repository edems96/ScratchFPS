#include "BSPVisdata.h"

BSPVisdata::~BSPVisdata() {
	free(this->vecs);
}

int BSPVisdata::getNVecs() {
	return this->n_vecs;
}

int BSPVisdata::getSzVecs() {
	return this->sz_vecs;
}

unsigned char *BSPVisdata::getVecs() {
	return this->vecs;
}
		
bool BSPVisdata::Read(FILE *f, int offset) {
	if( fseek(f, this->offset, SEEK_SET) )
		return false;
	
	return fread(this->vecs, sizeof(unsigned char), this->n_vecs * this->sz_vecs, f) == this->n_vecs * this->sz_vecs;
}