#ifndef BSP_PLANE_H
#define BSP_PLANE_H

#include "../Vector.h"

class BSPPlane {
	
	private:
		Vector normal;
		float distance;
		
	public:
		Vector getNormal();
		float getDistance();
}
#endif