#include "Game.hpp"

Game* game = nullptr;

int main(int argc, char* args[]) {

	//declare game object
	game = new Game();

	//initialize game
	game->init("Project 3D", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	//main game loop
	while (game->running()) {
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();

	return 0;
}