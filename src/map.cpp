#include "map.h"

Map::Map(const char* path) {
	strncpy(this->path, path, MAX_PATH_LENGTH);
	this->n_spawnpoints = 0;
}

Map::~Map() {
	// todo: free
	free(this->spawnpoints);
}

bool Map::Load() {
	FILE *f;
	
	f = fopen(path, "rb");
	
	if( f == NULL ) {
		printf("Error: Failed to open map file: %s\n", path);
		return false;
	}
	
	// read map, etc
	fclose(f);
	
	return true;
}

ushort Map::getSpawnpointsCount() {
	return this->n_spawnpoints;
}

Spawnpoint *Map::getSpawnpoints() {
	return this->spawnpoints;
}