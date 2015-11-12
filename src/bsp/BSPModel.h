#ifndef BSP_MODEL_H
#define BSP_MODEL_H

class BSPModel {
	
	private:
		float mins[3];
		float maxs[3];
		int face;
		int n_faces;
		int brush;
		int n_brushes;
		
	public:
		float *getMins();
		float *getMaxs();
		int getFace();
		int getFaces();
		int getBrush();
		int getBrushes();
};

#endif