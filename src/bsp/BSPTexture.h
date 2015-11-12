#ifndef BSP_TEXTURE_H
#define BSP_TEXTURE_H

class BSPTexture {
	
	private:
		char 	name[64];
		int		flags;
		int		contents;
		
	public:
		const char *getName();
		int getFlags();
		int getContents();
	
};

#endif