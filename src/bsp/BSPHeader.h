#ifndef BSP_HEADER_H
#define BSP_HEADER_H

#include "BSPDirentry.h"

class BSPHeader {
	
	private:
		char magic[4];
		int version;
		BSPDirentry direntires[18];
		
	public:
		bool 			isValid();
		int 			getVersion();
		BSPDirentry 	*getDirentries();
		
};
#endif