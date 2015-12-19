#include <iostream>
#include <Windows.h>
#include "SDL.h"

#include "Ecran.h"
#include "Cpu.h"

void close();

// Fonction Main
// *************
int main(int argc, char** argv)
{
	// INITIALISATION DE SDL2
	SDL_Init(SDL_INIT_EVERYTHING);
	if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
	{
		std::cout << "Erreur d'initialisation de la SDL : " << SDL_GetError() << std::endl;
		exit(EXIT_FAILURE);
	}

	// CREATION DE LA FENETRE PRINCIPALE
	SDL_Window *ecran = SDL_CreateWindow(
		"GBCE", 
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		ECRAN_LARGEUR,
		ECRAN_HAUTEUR,
		SDL_WINDOW_SHOWN);

	if (ecran == NULL)
	{
		std::cout << "Erreur lors de la création de la fenêtre principale : " << SDL_GetError() << std::endl;
		exit(EXIT_FAILURE);
	}

	// AFFICHAGE DE LA FENETRE PRINCIPALE
	SDL_UpdateWindowSurface(ecran);

	//SDL_Renderer *renderer = SDL_CreateRenderer(ecran, -1, 0);
	//SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear"); => SDL_WINDOW_FULLSCREEN_DESKTOP
	//SDL_RenderSetLogicalSize(renderer, ECRAN_LARGEUR, ECRAN_HAUTEUR);
	//SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

	close();

	// DESTRUCTION DE LA FENETRE PRINCIPALE
	SDL_DestroyWindow(ecran);

	// FERMETURE DE SDL
	SDL_Quit();

	return EXIT_SUCCESS;
}

// Gestion de la fermeture du programme
// ************************************
void close()
{
	int continuer = 1;
	SDL_Event event;

	while (continuer)
	{
		SDL_WaitEvent(&event);
		switch (event.type)
		{
			case SDL_QUIT:
				continuer = 0;
		}
	}
}