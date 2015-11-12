#ifndef GAME_H
#define GAME_H

#include <cstdio>

#include "SDL2/SDL.h"

#include <GL/gl.h>
#include <GL/glu.h>

#include "types.h"
#include "player.h"

// defaults
#define D_SCREEN_WIDTH 1024
#define D_SCREEN_HEIGHT 768
#define D_FULLSCREEN 0

#define TITLE "Scratch 0.1"

class Game {
	
	private:
		ushort screen_width, screen_height;
		bool fullscreen, running;
		
		SDL_Window *window;
		SDL_GLContext glContext;
		
		Player *player;
		
		bool InitOpenGl();
		bool InitGame();
		
		void HandleEvents();
		void Update();
		void Draw();
		
		void OnKeyDown(SDL_Event event);
		void OnMouseButtonDown(SDL_Event event);
		
	public:
		static Game * sGame;
		
		Game();
		Game(ushort screen_width, ushort screen_height);
		Game(ushort screen_width, ushort screen_height, bool fullscreen);
		~Game();
		
		bool Init();
		void Start();
		
		bool isFullscreen();
		bool isRunning();
		
		SDL_Window *getWindow();
		ushort getScreenWidth();
		ushort getScreenHeight();
		
		void wrapMouseToCenter();
};

#endif