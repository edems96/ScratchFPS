#ifndef BSP_LIGHTMAP_H
#define BSP_LIGHTMAP_H

#include "../RGB.h"

class BSPLightmap {
	
	private:
		RGB[128][128] map;
		
	public:
		RGB *getMap();
}

#endif