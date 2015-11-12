@echo ### Compile vector.cpp ###
@g++ -g src/vector.cpp -o objs/vector.obj -c

@echo ### Compile camera.cpp ###
@g++ -g src/camera.cpp -o objs/camera.obj -c

@echo ### Compile player.cpp ###
@g++ -g src/player.cpp -o objs/player.obj -c

@echo ### Compile map.cpp ###
@g++ -g src/map.cpp -o objs/map.obj -c

@echo ### Compile spawnpoint.cpp ###
@g++ -g src/spawnpoint.cpp -o objs/spawnpoint.obj -c

@echo ### Compile model.cpp ###
@g++ -g src/model.cpp -o objs/model.obj -c

@echo ### Compile md3surface.cpp ###
@g++ -g src/md3surface.cpp -o objs/md3surface.obj -c

@echo ### Compile md3model.cpp ###
@g++ -g src/md3model.cpp -o objs/md3model.obj -c

@echo ### Compile game.cpp ###
@g++ -g src/game.cpp -o objs/game.obj -c 

@echo ### Compile main.cpp ###
@g++ -g src/main.cpp -o objs/main.obj -c

@echo ###########################

@echo ### Linking Scratch.exe ###
@g++ -g -o Scratch.exe objs/*.obj -lmingw32 -lSDL2main -lSDL2 -lopengl32 -lglu32

@echo ###########################

@echo Finish

pause