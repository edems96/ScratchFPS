#ifndef BSP_LIGHTVOL_H
#define BSP_LIGHTVOL_H

class BSPLightvol {
	
	private:
		unsigned char ambient[3];
		unsigned char directional[3];
		unsigned char dir[2];
		
	public:
		unsigned char *getAmbient();
		unsigned char *getDirectional();
		unsigned char *getDir();
};

#endif