#include "game.h"

Game *Game::sGame = NULL;

Game::Game() {
	Game::sGame = this;
	
	this->screen_width 		= D_SCREEN_WIDTH;
	this->screen_height 	= D_SCREEN_HEIGHT;
	this->fullscreen 		= D_FULLSCREEN;
	this->running 			= false;
}

Game::Game(ushort screen_width, ushort screen_height) {
	Game::sGame = this;
	
	this->screen_width 		= screen_width;
	this->screen_height 	= screen_height;
	this->fullscreen 		= D_FULLSCREEN;
	this->running			= false;
}

Game::Game(ushort screen_width, ushort screen_height, bool fullscreen) {
	Game::sGame = this;
	
	this->screen_width 		= screen_width;
	this->screen_height 	= screen_height;
	this->fullscreen 		= fullscreen;
	this->running			= false;
}

Game::~Game() {
	// TODO: free memory!!!
	SDL_GL_DeleteContext(glContext);  
	SDL_DestroyWindow(window);
	SDL_Quit();
}

bool Game::Init() {
	printf("Screen: %d %d\n", this->screen_width, this->screen_height);
	printf("Fullscreen: %d\n", this->fullscreen);
	
	if( SDL_Init(SDL_INIT_EVERYTHING) != 0 ) {
		printf("Error: Failed to initialize SDL2!\n");
		return false;
	}
	
	window = SDL_CreateWindow(
		TITLE,
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		this->screen_width, this->screen_height,
		SDL_WINDOW_OPENGL | (this->fullscreen ? SDL_WINDOW_FULLSCREEN : 0));
	
	if( window == NULL ) {
		printf("Error: Failed to initialize window!\n");
		return false;
	}
	
	glContext = SDL_GL_CreateContext(window);

	if( !InitOpenGl() ) {
		printf("Error: Failed to initialize OpenGL!\n");
		return false;
	}
	
	if( !InitGame() ) {
		printf("Error: Failed to initialize Game!\n");
		return false;
	}
	
	return true;
}

bool Game::InitOpenGl() {
	
	glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
	glClearDepth(1.0f);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, (float)this->screen_width / (float)this->screen_height, 0.1, 500.0);
	
	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_DEPTH_TEST);
	
	return true;
}

bool Game::InitGame() {
	player = new Player("eDem's");
	
	return true;
}

void Game::Start() {
	this->running = true;
	
	while( this->running ) {
		HandleEvents();
		Update();
		Draw();
		
		SDL_GL_SwapWindow(window);
	}
}

bool Game::isFullscreen() {
	this->fullscreen;
}

bool Game::isRunning() {
	this->running;
}

void Game::HandleEvents() {
	SDL_Event event;
	
    while( SDL_PollEvent(&event) ) {
		
		switch( event.type ) {
			
			case SDL_QUIT: 				this->running = false; break;
			case SDL_KEYDOWN: 			OnKeyDown(event); break;
			case SDL_MOUSEBUTTONDOWN: 	OnMouseButtonDown(event); break;
		}
    }
}

void Game::Update() {
	
}

void Game::Draw() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	
	player->getCamera()->Update();
	player->getCamera()->Control();
}

void Game::OnKeyDown(SDL_Event event) {
	
	switch( event.key.keysym.sym ) {
		case SDLK_F1: this->running = false; break;
	}
	
}

void Game::OnMouseButtonDown(SDL_Event event) {
	
}

SDL_Window *Game::getWindow() {
	return this->window;
}

ushort Game::getScreenWidth() {
	return this->screen_width;
}

ushort Game::getScreenHeight() {
	return this->screen_height;
}

void Game::wrapMouseToCenter() {
	SDL_WarpMouseInWindow(this->window, this->screen_width / 2, this->screen_height / 2);
}