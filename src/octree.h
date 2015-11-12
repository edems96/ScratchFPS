#ifndef OCTREE_H
#define OCTREE_H

#include "aabb.h"

class Octree {
	
	private:
		AABB extends;
		Octree *children[8];
		
		
	public:
		Octree();
		~Octree();
		
		
};

#endif