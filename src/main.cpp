#include "main.h"

int main(int argc, char **args) {
	
	//srand(time(NULL));
	
	Game * game;
	
	ushort width = 0, height = 0;
	bool fullscreen = 0;
	
	for(uint i = 1; i < argc; i++) {

		if( args[i][0] != '-' )
			continue;
		
		switch( args[i][1] ) {
			case 'w': width = (ushort)atoi(args[++i]); break;
			case 'h': height = (ushort)atoi(args[++i]); break;
			case 'f': fullscreen = atoi(args[++i]) == 1 ? true : false; break;
		}
	}
	
	
	if( width > 0 && height > 0 )
		game = new Game(width, height, fullscreen);
	else
		game = new Game();
	
	if( !game->Init() ) {
		printf("Error: Failed to initialize game!\n");
		return 0;
	}
	
	game->Start();
	
	return 1;
}