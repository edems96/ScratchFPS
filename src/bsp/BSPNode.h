#ifndef BSP_NODE_H
#define BSP_NODE_H

class BSPNode {
	
	private:
		int plane;
		int children[2];
		int mins[3];
		int maxs[3];
		
	public:
		int getPlane();
		int *getChildren();
		int *getMins();
		int *getMaxs();
};

#endif