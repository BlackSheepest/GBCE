#include <iostream>
#include <Windows.h>
#include "SDL.h"

#define SLEEPTIME 1000000000

int main(int argc, char** argv)
{
	// INITIALISATION DE SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	std::cout << "Execution de l'application SDL2" << std::endl;

	// FERMETURE DE SDL
	SDL_Quit();

	Sleep(SLEEPTIME);

	return 0;
}