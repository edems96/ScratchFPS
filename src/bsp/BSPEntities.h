#ifndef BSP_ENTITIES_H
#define BSP_ENTITIES_H

#include <cstdlib>

class BSPEntities {
	
	private:
		char *ents;
		
	public:
		BSPEntities(unsigned int size);
		~BSPEntities();
		
		bool Read(FILE *f, int offset);
};

#endif