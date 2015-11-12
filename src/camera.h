#ifndef CAMERA_H
#define CAMERA_H

#include <SDL2/SDL.h>
#include <GL/gl.h>

#include "vector.h"

#define D_MOVE_SPEED 10
#define D_MOUSE_SPEED 10

class Camera {
	
	private:
		Vector location;
		
		float pitch, yaw, moveSpeed, mouseSpeed;
		bool mouseIn;
		
		void lockCamera();
		void moveCamera(float direction);
		//void moveCameraUp(float direction); // unused
	
	public:
		Camera();
		
		Camera *setLocation(const Vector *location);
		Camera *setMoveSpeed(float speed);
		Camera *setMouseSpeed(float speed);
		Camera *setMouseIn(bool isIn);
		
		Vector getLocation();
		float getMoveSpeed();
		float getMouseSpeed();
		bool isMouseIn();
		
		void Update();
		void Control();
		
};

#endif