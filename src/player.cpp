#include "player.h"

Player::Player() {
	strncpy(this->name, D_PLAYER_NAME, MAX_NAME_LENGTH);
	
	this->kills = 0;
	this->deaths = 0;
	this->health = D_PLAYER_HEALTH;
	
	this->camera = new Camera();
}

Player::Player(const char *name) {
	strncpy(this->name, name, MAX_NAME_LENGTH);
	
	this->kills = 0;
	this->deaths = 0;
	this->health = D_PLAYER_HEALTH;
	
	this->camera = new Camera();
}

Player::~Player() {
	// TODO: free what we must
	free(this->camera);
}

Player *Player::setName(const char *name) {
	strncpy(this->name, name, MAX_NAME_LENGTH); return this;
}

Player *Player::setKills(uint kills) {
	this->kills = kills; return this;
}

Player *Player::setDeaths(uint deaths) {
	this->deaths = deaths; return this;
}

Player *Player::setHealth(uint health) {
	this->health = health; return this;
}

Player *Player::setLocation(const Vector *location) {
	this->camera->setLocation(location); return this;
}

const char *Player::getName() {
	return this->name;
}

uint Player::getKills() {
	return this->kills;
}

uint Player::getDeaths() {
	return this->deaths;
}

uint Player::getHealth() {
	return this->health;
}

Vector Player::getLocation() {
	return this->camera->getLocation();
}

Camera *Player::getCamera() {
	return this->camera;
}