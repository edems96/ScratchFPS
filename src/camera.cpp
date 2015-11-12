#include "camera.h"
#include "game.h"

Camera::Camera() {
	this->pitch = 0.0f;
	this->yaw = 0.0f;
	this->moveSpeed = D_MOVE_SPEED;
	this->mouseSpeed = D_MOUSE_SPEED;
	this->mouseIn = false;
}
		
Camera *Camera::setLocation(const Vector *location) {
	this->location = location; return this;
}

Camera *Camera::setMoveSpeed(float speed) {
	this->moveSpeed = speed; return this;
}

Camera *Camera::setMouseSpeed(float speed) {
	this->mouseSpeed = speed; return this;
}

Camera *Camera::setMouseIn(bool isIn) {
	this->mouseIn = isIn; return this;
}

Vector Camera::getLocation() {
	return this->location;
}

float Camera::getMoveSpeed() {
	return this->moveSpeed;
}

float Camera::getMouseSpeed() {
	return this->mouseSpeed;
}

bool Camera::isMouseIn() {
	return this->mouseIn;
}

void Camera::Update() {
	
	if( this->mouseIn ) {
		int x, y;
		SDL_GetMouseState(&x, &y);
		
		this->yaw += (Game::sGame->getScreenWidth() / 2.0f - x) * mouseSpeed;
		this->pitch += (Game::sGame->getScreenHeight() / 2.0f - y) * mouseSpeed;
	
		lockCamera();
		
		Game::sGame->wrapMouseToCenter();
		
		const Uint8 *keyState = SDL_GetKeyboardState(NULL);
		
		if( keyState[SDLK_w] )
			moveCamera(0.0f);
		else if( keyState[SDLK_s] )
			moveCamera(180.0f);
			
		if( keyState[SDLK_a] )
			moveCamera(90.0f);
		else if( keyState[SDLK_d] )
			moveCamera(270.0f);
			
	}
	
	glRotatef(-this->pitch, 1.0, 0.0, 0.0);
	glRotatef(-this->yaw, 0.0, 1.0, 0.0);
}

void Camera::Control() {
	glTranslatef(-this->location.x, -this->location.y, -this->location.z);
}

void Camera::lockCamera() {
	
	if( this->pitch > 90.0f )
		this->pitch = 90.0f;
	else if( this->pitch < -90.0f )
		this->pitch = -90.0f;
	
	if( this->yaw < 0.0f )
		this->yaw += 360.0f;
	else if( this->yaw > 360.0f )
		this->yaw -= 360.0f;
	
}

void Camera::moveCamera(float direction) {
	float radian = (this->yaw + direction) * M_PI / 180.0f;
	
	location.x -= sin(radian) * moveSpeed;
	location.z -= sin(radian) * moveSpeed;
}

/* void Camera::moveCameraUp(float direction) {
	this->location.y += sin( (this->pitch + direction) * M_PI / 180.0f ) * this->moveSpeed;
} // UNUSED */