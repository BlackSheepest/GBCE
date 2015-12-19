#include "Ecran.h"

// Nombre de couleur affichable par l'écran
#define ECRAN_NB_COULEURS 32768

// Dimension de l'écran de la GBC
#define ECRAN_HAUTEUR_BASE 64
#define ECRAN_LARGEUR_BASE 32

// Facteur d'agrandissement de la taile des pixels
#define ECRAN_DIMPIXEL 1

// Dimension de l'afficheur SDL
#define ECRAN_HAUTEUR  ECRAN_HAUTEUR_BASE*ECRAN_DIMPIXEL
#define ECRAN_LARGEUR  ECRAN_LARGEUR_BASE*ECRAN_DIMPIXEL

Ecran::Ecran()
{
	std::cout << "Constructeur Ecran" << std::endl;
}

Ecran::~Ecran() {}
