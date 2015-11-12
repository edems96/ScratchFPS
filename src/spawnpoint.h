#ifndef SPAWNPOINT_H
#define SPAWNPOINT_H

#include "vector.h"
#include "types.h"

class Spawnpoint {
	
	private:
		Vector position;
		ushort team;
		
	public:
		Spawnpoint(const Vector *position);
		
		Spawnpoint *setTeam(ushort team);
};

#endif