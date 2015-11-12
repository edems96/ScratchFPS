#ifndef BSP_EFFECT_H
#define BSP_EFFECT_H

class BSPEffect {
	
	private:
		char name[64];
		int brush;
		int unknown;
		
	public:
		const char *getName();
		int getBrush();
};

#endif