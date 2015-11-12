#ifndef BSP_VISDATA_H
#define BSP_VISDATA_H

#include <cstdio>
#include <cstdlib>

class BSPVisdata {
	
	private:
		int n_vecs;
		int sz_vecs;
		unsigned char *vecs;
		
	public:
		~BSPVisdata();
		
		int getNVecs();
		int getSzVecs();
		unsigned char *getVecs();
		
		bool Read(FILE *f, int offset);
}

#endif