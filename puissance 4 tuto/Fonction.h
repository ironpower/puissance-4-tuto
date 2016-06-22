#include <array>
#include <iostream>

enum Couleur{vide, jaune, rouge};

typedef std::array<std::array<Couleur, 7>, 6 > Grille;

void affGrille(const Grille& grille);

void initGrille(Grille& grille);
