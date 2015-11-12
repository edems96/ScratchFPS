#ifndef BSP_MAP_H
#define BSP_MAP_H

#include "BSPHeader.h"

#define BSP_VERSION 0
#define BSP_LUMPS 17

class BSPMap {
	
	private:
		FILE *f;
		
		BSPHeader header;
		
		void LoadError(const char *error);
		
	public:
		BSPMap();
		~BSPMap();
		
		bool Load(const char *filename);
};

#endif