#include "BSPMap.h"

BSPMap::BSPMap() {
	
}

BSPMap::~BSPMap() {
	
}
		
bool BSPMap::Load(const char *filename) {
	this->f = fopen(filename, "rb");
	
	if( !this->f )
		return false;
	
	if( !header.Read(f) ) {
		LoadError("BSPMap: Failed to read BSP Header!\n");
		return false;
	}
	
	if( !header.isValid() ) {
		LoadError("BSPMap: Invalid BSP Header!\n");
		return false;
	}
	
	if( header.getVersion() != BSP_VERSION ) {
		LoadError("BSPMap: Wrong BSP version!");
		return false;
	}

	
	fclose(this->f);
	
	return true;
}

void BSPMap::LoadError(const char *error) {
	fprintf(stderr, error);
	fclose(this->f);
}