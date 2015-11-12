#ifndef PLAYER_H
#define PLAYER_H

#include <cstring>

#include "camera.h"
#include "vector.h"
#include "types.h"

#define D_PLAYER_NAME "Unknown Player"
#define D_PLAYER_HEALTH 100

#define MAX_NAME_LENGTH 32

class Player {
	
	private:
		char name[MAX_NAME_LENGTH];
		uint kills, deaths, health;
		
		Camera *camera;
		// model, camera
		
	public:
		Player();
		Player(const char *name);
		~Player();
		
		Player *setName(const char *name);
		Player *setKills(uint kills);
		Player *setDeaths(uint deaths);
		Player *setHealth(uint health);
		Player *setLocation(const Vector *location);
		
		const char *getName();
		uint getKills();
		uint getDeaths();
		uint getHealth();
		Vector getLocation();
		Camera *getCamera();
		
		void onUpdate();
		void onDraw();
};

#endif