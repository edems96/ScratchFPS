#ifndef AABB_H
#define AABB_H

#include "vector.h"

class AABB {
	
	private:
		Vector origin;
		float size;
		
	public:
		AABB(Vector origin, float size);
		
		Vector getOrigin();
		float getSize();
};

#endif