#ifndef ECRAN_H
#define ECRAN_H

#include <iostream>
#include "SDL.h"

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