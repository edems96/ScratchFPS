#ifndef BSP_DIRENTRY_H
#define BSP_DIRENTRY_H

class BSPDirentry {
	
	private:
		int offset;
		int length;
		
	public:
		int getOffset();
		int getLength();
		
};

#endif