#include <SDL.h>
#include <stdio.h>
#include <string>


SDL_Window* window = NULL;

void bootstrapSDL() {
	//Screen dimension constants
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;
	const int SCREEN_POSX = 600;
	const int SCREEN_POSY = 240;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SCREEN_POSX, SCREEN_POSY, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	}

	if (window == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
	}
}


int main(int argc, char* args[]) 
{
	bool quit = false;

	bootstrapSDL();

	while (!quit) {
		
	}

	return 0;
}