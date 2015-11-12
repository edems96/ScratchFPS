#ifndef BSP_BRUSH_H
#define BSP_BRUSH_H

class BSPBrush {
	
	private:
		int brushside;
		int n_brushsides;
		int texture;
	
	public:
		int getBrushside();
		int getBrushsides();
		int getTexture();
};

#endif