#include "BSPHeader.h"

bool BSPHeader::isValid() {
	return this->magic[0] == 'I' && this->magic[1] == 'B' && this->magic[2] == 'S' && this->magic[3] == 'P';
}

int BSPHeader::getVersion() {
	return this->version;
}

BSPDirentry *BSPHeader::getDirentries() {
	return this->direntries;
}

bool BSPHeader::Read(FILE *f, int offset) {
	if( !f )
		return false;
	
	return fread(&this, sizeof(this), 1, f) == 1;
}