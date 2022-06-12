#include <iostream>

#include <SDL.h>
#include <SDL_image.h>

const int WIDTH = 800, HEIGHT = 800;

int main(int argc, char* argv[])
{
	//Initialise SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{std::cout << " SDL could not initialise! SDL Error: " << SDL_GetError() << std::endl;}

	SDL_Window *window = SDL_CreateWindow("MegaTetris", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
	SDL_Event windowEvent;

	//The Game Loop
	while (true) {

		//Break Game when X button is pressed
		if (SDL_PollEvent(&windowEvent)) {
			if (SDL_QUIT == windowEvent.type)
			{
				break;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_QUIT;

	return EXIT_SUCCESS;
}