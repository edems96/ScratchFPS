#ifndef MAP_H
#define MAP_H

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "spawnpoint.h"

#define MAX_PATH_LENGTH 256
#define MAX_NAME_LENTH 32

class Map {
	
	private:
		char path[MAX_PATH_LENGTH];
		char name[MAX_NAME_LENTH];
		
		ushort n_spawnpoints;
		Spawnpoint *spawnpoints;
		
	public:
		Map(const char* path);
		~Map();
		
		bool Load();
		
		ushort getSpawnpointsCount();
		Spawnpoint *getSpawnpoints();
		
		
		void onUpdate();
		void onDraw();
};

#endif