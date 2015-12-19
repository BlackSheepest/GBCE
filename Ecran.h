#ifndef ECRAN_H
#define ECRAN_H

#include <iostream>
#include "SDL.h"

// Nombre de couleur affichable par l'écran en puissance de 2 (2^15)
#define ECRAN_NB_COULEURS 15

// Dimension de l'écran de la GBC
#define ECRAN_LARGEUR_BASE 160
#define ECRAN_HAUTEUR_BASE 144

// Facteur d'agrandissement de la taile des pixels
#define ECRAN_DIMPIXEL 2

// Dimension de l'afficheur SDL
#define ECRAN_LARGEUR  ECRAN_LARGEUR_BASE*ECRAN_DIMPIXEL
#define ECRAN_HAUTEUR  ECRAN_HAUTEUR_BASE*ECRAN_DIMPIXEL

class Ecran
{
public:
	Ecran();
	~Ecran();

private:
	SDL_Rect	m_position;
	Uint16		m_couleur;
};

#endif