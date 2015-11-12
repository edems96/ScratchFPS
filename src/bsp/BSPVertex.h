#ifndef BSP_VERTEX_H
#define BSP_VERTEX_H

#include "../Vector.h"
#include "../TextureCoordinateST.h"

class BSPVertex {
	
	private:
		Vector position;
		TextureCoordinateST surface;
		TextureCoordinateST lightmap;
		Vector normal;
		unsigned char color[4];
		
	public:
		Vector getPosition();
		TextureCoordinateST getSurface();
		TextureCoordinateST getLightmap();
		Vector getNormal();
		unsigned char *getColor();
};

#endif