#ifndef BSP_FACE_H
#define BSP_FACE_H

typedef enum BSPFaceType {
	Polygon,
	Patch,
	Mesh,
	Billboard
} BSPFaceType;

class BSPFace {
	
	private:
		int 			texture;
		int 			effect;
		BSPFaceType 	type;
		int 			vertex;
		int 			n_vertexes;
		int 			meshvert;
		int 			n_meshverts;
		int 			lm_index;
		int 			lm_start[2];
		int 			lm_size[2];
		Vector 			lm_origin;
		Vector 			lm_vecs[2];
		Vector 			normal;
		int 			size[2];
		
	public:
		int getTexture();
		int getEffect();
		int getType();
		int getVertex();
		int getVertices();
		int getMeshvert();
		int getMeshverts();
		int getLightMapIndex();
		int *getLightMapStart();
		int *getLightMapSize();
		Vector getLightMapOrigin();
		Vector *getLightMapVecs();
		Vector getNormal();
		int *getSize();
};

#endif