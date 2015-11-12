#ifndef BSP_BRUSH_SIDE_H
#define BSP_BRUSH_SIDE_H

class BSPBrushside {
	
	private:
		int plane;
		int texture;
		
	public:
		int getPlane();
		int getTexture();
};

#endif