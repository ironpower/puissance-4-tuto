#include "Fonction.h"




//affique la grille
void affGrille(const Grille& grille)
{
	for (int ligne = 0; ligne < grille.size(); ligne++)
	{
		for (int colonne = 0; colonne < grille[0].size(); colonne++)
		{
			std::cout << grille[ligne][colonne] << " | ";
		}
		
		std::cout << std::endl;
	}

}


void initGrille(Grille& grille)
{
	for (int ligne = 0; ligne < grille.size(); ligne++)
	{
		for (int colonne = 0; colonne < grille[0].size(); colonne++)
		{
			grille[ligne][colonne] = Couleur::vide;
		}
	}
}