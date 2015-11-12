#include "spawnpoint.h"

Spawnpoint::Spawnpoint(const Vector* position) {
	this->position = position;
	this->team = 0;
}

Spawnpoint *Spawnpoint::setTeam(ushort team) {
	this->team = team; return this;
}