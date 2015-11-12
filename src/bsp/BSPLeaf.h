#ifndef BSP_LEAF_H
#define BSP_LEAF_H

class BSPLeaf {
	
	private:
		int cluster;
		int area;
		int mins[3];
		int maxs[3];
		int leafface;
		int n_leaffaces;
		int leafbrush;
		int n_leafbrushes;
		
	public:
		int getCluster();
		int getArea();
		int *getMins();
		int *getMaxs();
		int getLeafFace();
		int getLeafFaces();
		int getLeafBrush();
		int getLeafBrushes();
};

#endif